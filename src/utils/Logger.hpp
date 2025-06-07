#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <chrono>
#include <ctime>

class Logger {
public:
    Logger(const std::string& filename) : logFile(filename, std::ios::app) {
        if (!logFile.is_open()) {
            std::cerr << "Failed to open log file: " << filename << std::endl;
        }
    }

    ~Logger() {
        if (logFile.is_open()) {
            logFile.close();
        }
    }

    void log(const std::string& message) {
        if (logFile.is_open()) {
            logFile << currentDateTime() << " - " << message << std::endl;
        }
    }

    void logError(const std::string& message) {
        log("ERROR: " + message);
    }

    void logDebug(const std::string& message) {
        log("DEBUG: " + message);
    }

private:
    std::ofstream logFile;

    std::string currentDateTime() {
        auto now = std::chrono::system_clock::now();
        std::time_t nowTime = std::chrono::system_clock::to_time_t(now);
        return std::ctime(&nowTime);
    }
};

#endif // LOGGER_HPP