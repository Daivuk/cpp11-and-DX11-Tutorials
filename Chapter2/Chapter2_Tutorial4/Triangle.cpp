#include "Triangle.h"

struct Vertex {
	float x, y;
	float r, g, b;
};

Triangle::Triangle(Renderer& renderer) {
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

Triangle::~Triangle() {
	m_vertexBuffer->Release();
}

void Triangle::draw(Renderer& renderer) {
	// Bind the vertex buffer
	UINT stride = sizeof(Vertex);
	UINT offset = 0;
	renderer.getDeviceContext()->IASetVertexBuffers(0, 1, &m_vertexBuffer, &stride, &offset);

	// Draw
	renderer.getDeviceContext()->Draw(3, 0);
}
