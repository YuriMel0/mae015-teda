#include <iostream>
#include "ListaEncadeada.h"
#include "No.h"
#include "Pessoa.h"
#include <string>

using namespace std;

int main()
{
    ListaEncadeada listaDeEspera;
    int opcao, id, idRemove;
    string nome;

    do {
        cout << "----------------- Lista de Espera -----------------" << endl;
        cout << "1 - Para inserir uma pessoa da lista!" << endl;
        cout << "2 - Para remover uma pessoa da lista!" << endl;
        cout << "3 - Para deletar todos da lista!" << endl;
        cout << "0 - Para sair do programa!" << endl;
        cout << "---------------------------------------------------" << endl;
        cin >> opcao;

        switch(opcao) {
            case 1: {
                cout << "Informe o nome: " << endl;
                cin >> nome;
                cout << "Informe o ID: " << endl;
                cin >> id;
                Pessoa pessoa(nome, id);
                listaDeEspera.inserirInicio(pessoa);
            }
            case 2: {
                cout << "Informe o ID a ser removido: " << endl;
                cin >> idRemove;
                listaDeEspera.remover(idRemove);
            }
            case 3: {
                listaDeEspera.~ListaEncadeada();
            }
        }
    }while(opcao != 0);

    return 0;
}
