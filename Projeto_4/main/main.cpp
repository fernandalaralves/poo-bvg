#include <iostream>
#include "Aluno.h"
#include "Disciplina.h"

int main() {
    // Criando aluno
    Aluno aluno("Fernanda Alves", "202500123", "ADS");

    // Criando disciplinas
    Disciplina d1("Programação Estruturada", 60);
    Disciplina d2("Banco de Dados", 80);

    // Definindo notas
    d1.setNota(7.5);
    d2.setNota(5.0);

    // Exibindo informações
    aluno.exibirInformacoes();

    d1.exibirDisciplina();
    std::cout << "Status: " << (verificarAprovacao(d1) ? "Aprovado" : "Reprovado") << "\n";

    d2.exibirDisciplina();
    std::cout << "Status: " << (verificarAprovacao(d2) ? "Aprovado" : "Reprovado") << "\n";

    return 0;
}
