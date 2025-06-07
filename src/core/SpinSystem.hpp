#ifndef SPINSYSTEM_HPP
#define SPINSYSTEM_HPP

#include <vector>
#include <array>

class SpinSystem {
public:
    SpinSystem(int numSpins);
    void setSpinState(int index, const std::array<double, 3>& state);
    std::array<double, 3> getSpinState(int index) const;
    void manipulateBlochVector(int index, const std::array<double, 3>& manipulation);
    void resetSystem();

private:
    int numSpins;
    std::vector<std::array<double, 3>> spinStates; // Vector of Bloch states
};

#endif // SPINSYSTEM_HPP