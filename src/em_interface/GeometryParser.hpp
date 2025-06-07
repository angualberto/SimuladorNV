#ifndef GEOMETRY_PARSER_HPP
#define GEOMETRY_PARSER_HPP

#include <string>
#include <vector>

class GeometryParser {
public:
    GeometryParser(const std::string& filePath);
    void parseGeometry();
    const std::vector<double>& getVertices() const;
    const std::vector<int>& getFaces() const;

private:
    std::string filePath;
    std::vector<double> vertices;
    std::vector<int> faces;

    void loadGeometryFromCAD();
    void loadGeometryFromCOMSOL();
};

#endif // GEOMETRY_PARSER_HPP