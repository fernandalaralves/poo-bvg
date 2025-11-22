#include "Pessoa.h"

// Construtor padrão
Pessoa::Pessoa() {
    this->nome = "Sem nome";
    this->telefone = "Sem telefone";
    cout << "Objeto Pessoa criado (construtor padrao)." << endl;
}

// Construtor parametrizado
Pessoa::Pessoa(string nome, string telefone) {
    this->nome = nome;
    this->telefone = telefone;
    cout << "Objeto Pessoa criado (construtor parametrizado)." << endl;
}

// Destrutor
Pessoa::~Pessoa() {
    cout << "Destruindo objeto Pessoa: " << this->nome << endl;
}

// Métodos de impressão
void Pessoa::imprimirNome() {
    cout << "Nome: " << this->nome << endl;
}

void Pessoa::imprimirTelefone() {
    cout << "Telefone: " << this->telefone << endl;
}
