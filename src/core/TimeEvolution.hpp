#ifndef TIME_EVOLUTION_HPP
#define TIME_EVOLUTION_HPP

#include "SpinSystem.hpp"

class TimeEvolution {
public:
    TimeEvolution(SpinSystem& system);
    void evolve(double timeStep, double totalTime);
    void setHamiltonian(const Hamiltonian& hamiltonian);

private:
    SpinSystem& spinSystem;
    Hamiltonian hamiltonian;

    void applyHamiltonian(double timeStep);
};

#endif // TIME_EVOLUTION_HPP