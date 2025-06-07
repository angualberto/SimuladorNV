#ifndef FIELDLOADER_HPP
#define FIELDLOADER_HPP

#include <string>
#include <vector>

class FieldLoader {
public:
    FieldLoader(const std::string& filename);
    std::vector<double> loadFieldTimeDependent();
    std::vector<std::vector<double>> loadFieldSpatialDependent();

private:
    std::string filename;
    void parseFile();
};

#endif // FIELDLOADER_HPP