#include <iostream>
#include "aluno.h"
#include "Disciplina.h"

Aluno::Aluno() {}

Aluno::Aluno(std::string nome, std::string matricula, std::string curso)
    : nome(nome), matricula(matricula), curso(curso) {}

void Aluno::exibirInformacoes() {
    std::cout << "\n=== Informações do Aluno ===\n";
    std::cout << "Nome: " << nome << std::endl;
    std::cout << "Matrícula: " << matricula << std::endl;
    std::cout << "Curso: " << curso << std::endl;
}
