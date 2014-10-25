#pragma once

#include <d3d11.h>
#include "Renderer.h"

class Triangle {
public:
	Triangle(Renderer& renderer);
	~Triangle();
	void draw(Renderer& renderer);

private:
	ID3D11Buffer* m_vertexBuffer = nullptr;
};
