#pragma once

#include <XEngine.h>
#include "Vertex.h"

enum class FillMode
{
	Wireframe,
	Solid
};

class Rasterizer
{
public:
	static Rasterizer* Get();

public:
	void SetColor(X::Color color);

	void SetFillMode(FillMode fillMode);

	void DrawPoint(int x, int y);

	void DrawPoint(const Vertex& vertex);

	void DrawLine(const Vertex& a, const Vertex& b);

private:
	X::Color mColor = X::Colors::White;

	FillMode mFillMode = FillMode::Solid;
};