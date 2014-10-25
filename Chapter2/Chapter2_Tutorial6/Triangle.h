#pragma once

#include <d3d11.h>
#include "Renderer.h"

class Triangle {
public:
	Triangle(Renderer& renderer);
	~Triangle();
	void draw(Renderer& renderer);
	void createMesh(Renderer& renderer);
	void createShaders(Renderer& renderer);

private:
	ID3D11Buffer* m_vertexBuffer = nullptr;
	ID3D11VertexShader* m_vertexShader = nullptr;
	ID3D11PixelShader* m_pixelShader = nullptr;
	ID3D11InputLayout* m_inputLayout = nullptr;
};
