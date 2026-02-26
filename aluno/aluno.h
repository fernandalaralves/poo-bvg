#ifndef ALUNO_H
#define ALUNO_H

#include <string>
#include <vector>

class Disciplina;

class Aluno {
private:
    std::string nome;
    std::string matricula;
    std::string curso;

public:
    // Construtores
    Aluno();
    Aluno(std::string nome, std::string matricula, std::string curso);

    // Métodos
    void exibirInformacoes();
};

#endif // ALUNO_H
