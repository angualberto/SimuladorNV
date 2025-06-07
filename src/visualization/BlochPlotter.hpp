#ifndef BLOCHPLOTTER_HPP
#define BLOCHPLOTTER_HPP

#include <iostream>
#include <vector>

class BlochPlotter {
public:
    // Construtor
    BlochPlotter() {}

    // Método para plotar o vetor de Bloch em formato textual
    void plotText(const std::vector<double>& blochVector) {
        std::cout << "Vetor de Bloch: (" 
                  << blochVector[0] << ", " 
                  << blochVector[1] << ", " 
                  << blochVector[2] << ")" << std::endl;
    }

    // Método para plotar o vetor de Bloch utilizando gnuplot
    void plotGnuplot(const std::vector<double>& blochVector) {
        // Implementação para plotar usando gnuplot
        // Este método deve gerar um script gnuplot e executá-lo
    }
};

#endif // BLOCHPLOTTER_HPP