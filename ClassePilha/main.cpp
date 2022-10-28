#include <iostream>
#include "pilhadinamica.h"

using namespace std;

int main()
{
    PilhaDinamica<int> pilhaInteiros;
    int opcao, valor;

    cout << "Programa gerador de pilha" << endl;

    do
    {
        cout << "----------------------------------------" << endl;
        cout << "digite 1 para inserir um elemento!" << endl;
        cout << "digite 2 para remover um elemento!" << endl;
        cout << "digite 3 para consultar o topo da pilha!" << endl;
        cout << "digite 4 para consultar o proximo valor apos o topo da pilha!" << endl;
        cout << "digite 5 para imprimir a pilha!" << endl;
        cout << "digite 6 para esvaziar todos os elementos da pilha!" << endl;
        cout << "digite 0 para para o programa!" << endl;
        cout << "----------------------------------------" << endl;
        cin >> opcao;

        switch (opcao)
        {
        case 1:
            cout << "digite o elemento a ser inserido: " << endl;
            cin >> valor;
            pilhaInteiros.inserir(valor);
            break;
        case 2:
            pilhaInteiros.remover();
            break;
        case 3:
            pilhaInteiros.consultaTopo();
            break;
        case 4:
            pilhaInteiros.consultaProx();
            break;
        case 5:
            pilhaInteiros.imprimir();
            break;
        case 6:
            pilhaInteiros.~PilhaDinamica();
            break;
        }

    } while (opcao != 0);
    
    return 0;
}