# C++ Spin System Simulation

Este projeto é uma simulação de um sistema de spins utilizando conceitos de mecânica quântica. O objetivo é fornecer uma plataforma para estudar a evolução temporal de sistemas de spins sob a influência de pulsos de controle.

## Estrutura do Projeto

A estrutura do projeto é a seguinte:

```
cpp-project
├── src
│   ├── main.cpp                  # Ponto de entrada do programa
│   ├── core                       # Lógica principal da simulação
│   │   ├── SpinSystem.hpp        # Classe de spin (vetor de Bloch, estados)
│   │   ├── Pulse.hpp             # Pulsos de controle (π, π/2, etc.)
│   │   ├── Sequence.hpp          # Sequências compostas de pulsos
│   │   ├── Hamiltonian.hpp       # Modelo de Hamiltoniano aplicado
│   │   └── TimeEvolution.hpp     # Solver para evolução temporal
│   ├── math                       # Ferramentas matemáticas
│   │   ├── LinearAlgebra.hpp     # Interface com Eigen ou outra lib
│   │   └── BlochUtils.hpp        # Operações com vetores de Bloch
│   ├── em_interface               # Interface com simulações EM (futuro)
│   │   ├── FieldLoader.hpp       # Carrega campo B(t) ou B(x,y,z)
│   │   └── GeometryParser.hpp    # Integra geometria de CAD/COMSOL
│   ├── visualization              # Visualização simples (texto ou 2D/3D)
│   │   └── BlochPlotter.hpp      # Plota vetor de Bloch em terminal ou gnuplot
│   └── utils                     # Utilidades gerais
│       ├── Logger.hpp            # Logs, debug e medição de tempo
│       └── Config.hpp            # Carregamento de configurações (ex: JSON)
├── CMakeLists.txt                # Script de configuração para o CMake
└── README.md                     # Documentação do projeto
```

## Instruções de Instalação

1. Clone o repositório:
   ```
   git clone <URL_DO_REPOSITORIO>
   cd cpp-project
   ```

2. Crie um diretório de build e navegue até ele:
   ```
   mkdir build
   cd build
   ```

3. Execute o CMake para configurar o projeto:
   ```
   cmake ..
   ```

4. Compile o projeto:
   ```
   make
   ```

## Uso

Após a compilação, você pode executar o programa gerado. O ponto de entrada é o arquivo `main.cpp`, que inicializa a aplicação e executa a simulação.

## Contribuição

Contribuições são bem-vindas! Sinta-se à vontade para abrir issues ou pull requests para melhorias e correções.

## Licença

Este projeto está licenciado sob a MIT License. Veja o arquivo LICENSE para mais detalhes.