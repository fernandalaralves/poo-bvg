#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include <string>

class Disciplina {
private:
    std::string nome;
    int cargaHoraria;
    float nota;

public:
    // Construtores
    Disciplina();
    Disciplina(std::string nome, int cargaHoraria);

    // Encapsulamento
    void setNota(float n);
    float getNota() const;

    // Para exibição
    void exibirDisciplina() const;

    // Função amiga
    friend bool verificarAprovacao(const Disciplina &disc);
};

#endif // DISCIPLINA_H
