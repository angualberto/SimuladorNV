#ifndef SEQUENCE_HPP
#define SEQUENCE_HPP

#include <vector>
#include "Pulse.hpp"

class Sequence {
public:
    Sequence() = default;
    ~Sequence() = default;

    void addPulse(const Pulse& pulse) {
        pulses.push_back(pulse);
    }

    void removePulse(size_t index) {
        if (index < pulses.size()) {
            pulses.erase(pulses.begin() + index);
        }
    }

    void execute() {
        for (const auto& pulse : pulses) {
            pulse.apply();
        }
    }

private:
    std::vector<Pulse> pulses;
};

#endif // SEQUENCE_HPP