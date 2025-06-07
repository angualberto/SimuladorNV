#include <iostream>
#include "core/SpinSystem.hpp"
#include "core/Pulse.hpp"
#include "core/Sequence.hpp"
#include "core/Hamiltonian.hpp"
#include "core/TimeEvolution.hpp"
#include "math/LinearAlgebra.hpp"
#include "math/BlochUtils.hpp"
#include "em_interface/FieldLoader.hpp"
#include "em_interface/GeometryParser.hpp"
#include "visualization/BlochPlotter.hpp"
#include "utils/Logger.hpp"
#include "utils/Config.hpp"

int main() {
    // Inicializa o sistema de spins
    SpinSystem spinSystem;

    // Carrega configurações
    Config config;
    config.load("config.json");

    // Configura pulsos
    Pulse pulse;
    pulse.configure(config.getPulseParameters());

    // Cria sequência de pulsos
    Sequence sequence;
    sequence.addPulse(pulse);

    // Define o Hamiltoniano
    Hamiltonian hamiltonian;
    hamiltonian.setParameters(config.getHamiltonianParameters());

    // Resolve a evolução temporal
    TimeEvolution timeEvolution;
    timeEvolution.solve(spinSystem, hamiltonian, sequence);

    // Visualiza o vetor de Bloch
    BlochPlotter plotter;
    plotter.plot(spinSystem.getBlochVector());

    return 0;
}