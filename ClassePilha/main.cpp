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
        cout << "----------------------------------------" << endl;
        cout << "digite 1 para inserir um elemento!" << endl;
        cout << "digite 2 para remover um elemento!" << endl;
        cout << "digite 3 para consultar o topo da pilha!" << endl;
        cout << "digite 4 para consultar o proximo valor apos o topo da pilha!" << endl;
        cout << "digite 5 para imprimir a pilha!" << endl;
        cout << "digite 0 para para o programa!" << endl;
        cout << "----------------------------------------" << endl;
        cin >> opcao;

        switch (opcao)
        {
        case 1:
            cout << "digite o elemento a ser inserido: " << endl;
            cin >> item;
            pilha1.inserir(item);
            break;
        case 2:
            item = pilha1.remover();
            cout << "intem removido: " << item << endl;
            break;
        case 3:
            item = pilha1.consultatopo();
            cout << item << endl;
            break;
        case 4:
            item = pilha1.consultaprox();
            cout << item << endl;
            break;
        case 5:
            pilha1.imprimir();
            break;
        }

    } while (opcao != 0);
    
    return 0;
}
