#include "Triangle.h"
#include <fstream>
#include <vector>
using namespace std;

struct Vertex {
	float x, y;
	float r, g, b;
};

Triangle::Triangle(Renderer& renderer) {
	createMesh(renderer);
	createShaders(renderer);
}

Triangle::~Triangle() {
	m_vertexBuffer->Release();
	m_vertexShader->Release();
	m_pixelShader->Release();
}

void Triangle::draw(Renderer& renderer) {
	// Bind the triangle shaders
	renderer.getDeviceContext()->VSSetShader(m_vertexShader, nullptr, 0);
	renderer.getDeviceContext()->PSSetShader(m_pixelShader, nullptr, 0);

	// Bind the vertex buffer
	UINT stride = sizeof(Vertex);
	UINT offset = 0;
	renderer.getDeviceContext()->IASetVertexBuffers(0, 1, &m_vertexBuffer, &stride, &offset);

	// Draw
	renderer.getDeviceContext()->Draw(3, 0);
}

void Triangle::createMesh(Renderer& renderer) {
	Vertex vertices[] = {
		{ -1, -1, 1, 0, 0 },
		{ 0, 1, 0, 1, 0 },
		{ 1, -1, 0, 0, 1 }
	};

	auto vertexBufferDesc = CD3D11_BUFFER_DESC(sizeof(vertices), D3D11_BIND_VERTEX_BUFFER);
	D3D11_SUBRESOURCE_DATA vertexData = { 0 };
	vertexData.pSysMem = vertices;

	renderer.getDevice()->CreateBuffer(&vertexBufferDesc, &vertexData, &m_vertexBuffer);
}

void Triangle::createShaders(Renderer& renderer) {
	ifstream vsFile("triangleVertexShader.cso", ios::binary);
	vector<char> vsData = { istreambuf_iterator<char>(vsFile), istreambuf_iterator<char>() };

	ifstream psFile("trianglePixelShader.cso", ios::binary);
	vector<char> psData = { istreambuf_iterator<char>(psFile), istreambuf_iterator<char>() };

	renderer.getDevice()->CreateVertexShader(vsData.data(), vsData.size(), nullptr, &m_vertexShader);
	renderer.getDevice()->CreatePixelShader(psData.data(), psData.size(), nullptr, &m_pixelShader);
}
