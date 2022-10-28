#include <iostream>
#include "pilhadinamica.h"

using namespace std;

template <typename T>
PilhaDinamica<T>::PilhaDinamica()
{
    NoTopo = nullptr;
}

template <typename T>
PilhaDinamica<T>::~PilhaDinamica()
{
    No<T>* aux;
    while (aux != nullptr){
        aux = NoTopo;
        NoTopo = NoTopo->proximo;
        delete aux;
    }
}

template <typename T>
bool PilhaDinamica<T>::pilhaVazia()
{
    return (NoTopo == nullptr);
}

template <typename T>
bool PilhaDinamica<T>::pilhaCheia()
{
    No<T>* NoNovo;
    try
    {
        NoNovo = new No<T>;
        delete NoNovo;
        return false;
    }
    catch(bad_alloc exception)
    {
        return true;
    }
};

template <typename T>
T PilhaDinamica<T>::consultaTopo()
{
    if (NoTopo == nullptr) {
        cout << "Nao e possivel consultar, pilha vazia" << endl;
    } else {
        T dadoTopo = NoTopo->valor;
        cout << dadoTopo << endl;
    }
}

template <typename T>
T PilhaDinamica<T>::consultaProx()
{
    if (NoTopo) {
        No<T>* NoTemp;
        NoTemp = NoTopo->proximo;
        T dadoprox = NoTemp->valor;
        delete NoTemp;
        cout << dadoprox << endl;
    } else {
        cout << "Nao e possivel consultar, proximo dado nao existe!" << endl;
    }
}

template <typename T>
void PilhaDinamica<T>::inserir(T item)
{
    if (pilhaCheia()) {
        cout << "Pilha cheia [Overflow]" << endl;
        cout << "Nao foi possivel inserir o item!" << endl;
    } else {
        No<T>* NoNovo = new No<T>;
        NoNovo->valor = item;
        NoNovo->proximo = NoTopo;
        NoTopo= NoNovo;
    }
}

template <typename T>
T PilhaDinamica<T>::remover()
{
    if (pilhaVazia()) {
        cout << "Pilha vazia [underflow]" << endl;
        cout << "Nao foi possivel remover nenhum elemento!" << endl;
    } else {
        No<T>* aux;
        aux = NoTopo;
        T dadoTopo = NoTopo->valor;
        NoTopo = NoTopo->proximo;
        delete aux;
        return dadoTopo;
    }
}

template <typename T>
void PilhaDinamica<T>::imprimir()
{
    No<T>* aux = NoTopo;
    cout << "Pilha: [";
    while (aux != nullptr) {
        cout << aux->valor << " ";
        aux = aux->proximo;
    }
    cout << "]\n";
}