#include "Polygon.h"

const Vertex Polygon::get_vertex(size_t idx) const
{
    return _vertices[idx];
}