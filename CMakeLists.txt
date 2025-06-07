cmake_minimum_required(VERSION 3.10)

# Define o nome do projeto
project(CPPProject)

# Define o padrão de C++ a ser utilizado
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Adiciona o diretório src ao caminho de busca
include_directories(src)

# Adiciona os arquivos fonte
file(GLOB SOURCES
    src/main.cpp
    src/core/*.hpp
    src/math/*.hpp
    src/em_interface/*.hpp
    src/visualization/*.hpp
    src/utils/*.hpp
)

# Cria o executável a partir dos arquivos fonte
add_executable(CPPProject ${SOURCES})