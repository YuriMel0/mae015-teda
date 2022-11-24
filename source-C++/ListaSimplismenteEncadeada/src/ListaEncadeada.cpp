#include "ListaEncadeada.h"
#include <iostream>

using namespace std;

ListaEncadeada::ListaEncadeada()
{
    inicio = nullptr;
}

ListaEncadeada::~ListaEncadeada()
{
    No *aux = inicio;
    while(aux != nullptr) {
        aux = aux->proximo;
        delete aux;
    }
}

void ListaEncadeada::inserirInicio(Pessoa pessoa)
{
    No *NovoNo = new No(pessoa);

    if(inicio == nullptr) {
        inicio->proximo = NovoNo;
    } else {
        No *aux = new No();
        aux = inicio->proximo;
        delete inicio->proximo;

        inicio->proximo = NovoNo;
        NovoNo->proximo = aux;

        delete aux;
    }
}

void ListaEncadeada::remover(int id)
{
    No *aux = inicio;

    if(inicio == nullptr) {
        cout << "Lista vazia, impossivel remover elemento" << endl;
    } else {
        while(aux != nullptr) {
        if (aux->dado.getId() != id) {
            aux = aux->proximo;
        } else {
            delete aux;
            break;
          }
        }
    }

}
