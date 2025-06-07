#ifndef HAMILTONIAN_HPP
#define HAMILTONIAN_HPP

class Hamiltonian {
public:
    Hamiltonian(double couplingConstant);
    double calculateEnergy() const;
    void setCouplingConstant(double couplingConstant);
    double getCouplingConstant() const;

private:
    double couplingConstant; // Coupling constant for the Hamiltonian
    // Additional parameters for the Hamiltonian can be added here
};

#endif // HAMILTONIAN_HPP