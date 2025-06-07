#ifndef CONFIG_HPP
#define CONFIG_HPP

#include <string>
#include <nlohmann/json.hpp>
#include <fstream>
#include <iostream>

class Config {
public:
    Config(const std::string& filename) {
        loadConfig(filename);
    }

    void loadConfig(const std::string& filename) {
        std::ifstream file(filename);
        if (!file.is_open()) {
            std::cerr << "Could not open the config file: " << filename << std::endl;
            return;
        }

        try {
            file >> configData;
        } catch (const std::exception& e) {
            std::cerr << "Error reading the config file: " << e.what() << std::endl;
        }
    }

    template<typename T>
    T get(const std::string& key, const T& defaultValue) const {
        if (configData.contains(key)) {
            return configData[key].get<T>();
        }
        return defaultValue;
    }

private:
    nlohmann::json configData;
};

#endif // CONFIG_HPP