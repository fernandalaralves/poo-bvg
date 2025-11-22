#include <iostream>
#include <vector>
#include "Pessoa.h"

using namespace std;

int main() {

    // Criando um vector para armazenar objetos Pessoa
    vector<Pessoa> lista;

    // Adicionando objetos ao vector
    lista.push_back(Pessoa("Victoria Sampaio", "99999-1111"));
    lista.push_back(Pessoa("Carlos Alberto", "98888-2222"));
    lista.push_back(Pessoa("Julia Lima", "97777-3333"));

    cout << "\n--- LISTA DE PESSOAS ---\n" << endl;

    // Percorrendo o vector
    for (int i = 0; i < lista.size(); i++) {
        lista[i].imprimirNome();
        lista[i].imprimirTelefone();
        cout << endl;
    }

    return 0;
}
