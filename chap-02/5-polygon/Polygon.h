#pragma once

#include <ostream>
#include <utility>
#include <vector>

using Vertex = std::pair<int, int>;

class Polygon
{
public:
    void                 add_vertex(int x, int y) { _vertices.emplace_back(x, y); };
    const Vertex         get_vertex(size_t idx) const;
    friend std::ostream& operator<<(std::ostream& stream, const Polygon& polygon)
    {
        for (const auto& v : polygon._vertices)
        {
            stream << "(" << v.first << "," << v.second << ") ";
        }
        return stream;
    }

private:
    std::vector<Vertex> _vertices;
};
