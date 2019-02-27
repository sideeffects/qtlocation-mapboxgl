#pragma once

#include <cstdint>

namespace mbgl {
namespace gfx {

enum class PrimitiveType : uint8_t {
    Points,
    Lines,
    LineLoop,
    LineStrip,
    Triangles,
    TriangleStrip,
    TriangleFan
};

enum class ColorBlendEquationType : uint8_t {
    Add,
    Subtract,
    ReverseSubtract
};

enum class ColorBlendFactorType : uint8_t {
    Zero,
    One,
    SrcColor,
    OneMinusSrcColor,
    SrcAlpha,
    OneMinusSrcAlpha,
    DstAlpha,
    OneMinusDstAlpha,
    DstColor,
    OneMinusDstColor,
    SrcAlphaSaturate,
    ConstantColor,
    OneMinusConstantColor,
    ConstantAlpha,
    OneMinusConstantAlpha
};

} // namespace gfx
} // namespace mbgl