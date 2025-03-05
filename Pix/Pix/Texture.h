#pragma once

#include <XEngine.h>

class Texture
{
public:
    void Load(const std::string& fileName);
    const std::string& GetFileName() const;

    // u & v are in the range of [0, 1]
    X::Color GetPixel(float u, float v, bool filter) const;

    int GetWidth() const;
    int GetHeight() const;

    // Texel Coordinates
    X::Color GetPixel(int u, int v) const;

private:

    std::string mFileName;
    std::unique_ptr<X::Color[]> mPixels;
    int mWidth = 0;
    int mHeight = 0;
};