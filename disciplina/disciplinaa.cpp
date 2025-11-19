#include <iostream>
#include "Disciplina.h"

// Construtor padrão
Disciplina::Disciplina() {
    nome = "";
    cargaHoraria = 0;
    nota = 0.0;
}

// Construtor parametrizado
Disciplina::Disciplina(std::string nome, int cargaHoraria)
    : nome(nome), cargaHoraria(cargaHoraria), nota(0.0) {}

// Set e Get
void Disciplina::setNota(float n) {
    nota = n;
}
float Disciplina::getNota() const {
    return nota;
}
void Disciplina::exibirDisciplina() const {
    std::cout << "\n--- Disciplina ---\n";
    std::cout << "Nome: " << nome << std::endl;
    std::cout << "Carga horária: " << cargaHoraria << "h" << std::endl;
    std::cout << "Nota: " << nota << std::endl;
}
// Função amiga
bool verificarAprovacao(const Disciplina &disc) {
    return disc.nota >= 6.0;
}
