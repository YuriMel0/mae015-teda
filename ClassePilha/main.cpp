#include <iostream>
#include "pilhadinamica.h"

using namespace std;

int main()
{
    pilhadinamica pilha1;
    t_dado item;
    int opcao;

    cout << "Programa gerador de pilha" << endl;

    do
    {
        cout << "digite 0 para para o programa!" << endl;
        cout << "digite 1 para inserir um elemento!" << endl;
        cout << "digite 2 para remover um elemento!" << endl;
        cout << "digite 3 para imprimir a pilha!" << endl;
        cin >> opcao;

        if (opcao==1) {
            cout << "digite o elemento a ser inserido: " << endl;
            cin >> item;
            pilha1.inserir(item);
        } else if (opcao==2) {
            item = pilha1.remover();
            cout << "intem removido: " << item << endl;
        } else if (opcao==3) {
            pilha1.imprimir();
        }

    } while (opcao != 0);
    

    return 0;
}
