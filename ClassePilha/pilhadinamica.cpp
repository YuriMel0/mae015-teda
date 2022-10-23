#include <iostream>
#include "pilhadinamica.h"
#include <cstddef>

using namespace std;

    pilhadinamica::pilhadinamica()
    {
        NoTopo = NULL;
    }

    pilhadinamica::~pilhadinamica()
    {
        No* aux;
        while (aux != NULL){
            aux = NoTopo;
            NoTopo = NoTopo->proximo;
            delete aux;
        }
    }

    bool pilhadinamica::pilhavazia()
    {
        return (NoTopo == NULL);
    }

    bool pilhadinamica::pilhacheia()
    {
        No* NoNovo;
        try
        {
            NoNovo = new No;
            delete NoNovo;
            return false;
        }
        catch(bad_alloc exception)
        {
            return true;
        }
        
    }

    void pilhadinamica::inserir(t_dado item)
    {
        if (pilhacheia()) {
            cout << "Pilha cheia [Overflow]" << endl;
            cout << "Nao foi possivel inserir o item!" << endl;
        } else {
            No* NoNovo = new No;
            NoNovo->valor = item;
            NoNovo->proximo = NoTopo;
            NoTopo= NoNovo;
        }
    }

    t_dado pilhadinamica::remover()
    {
        if (pilhavazia()) {
            cout << "Pilha vazia [underflow]" << endl;
            cout << "Nao foi possivel remover nenhum elemento!" << endl;
            return 0;
        } else {
            No* aux;
            aux = NoTopo;
            t_dado dadoTopo = NoTopo->valor;
            NoTopo = NoTopo->proximo;
            delete aux;
            return dadoTopo;
        }
    }

    void pilhadinamica::imprimir()
    {
        No* aux = NoTopo;
        cout << "Pilha: [";
        while (aux != NULL) {
            cout << aux->valor << " ";
            aux = aux->proximo;
        }
        cout << "]\n";
    }