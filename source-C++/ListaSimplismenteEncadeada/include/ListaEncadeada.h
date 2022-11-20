#ifndef LISTAENCADEADA_H
#define LISTAENCADEADA_H
#include "No.h"

class ListaEncadeada
{
    public:
        ListaEncadeada();
        virtual ~ListaEncadeada();
        bool listaVazia();
        bool listaCheia();
        void inserirInicio(string nome);
        void remover();

    protected:
        No *inicio;
        No *fim;
        unsigned int tamanhoLista;

    private:
};

#endif // LISTAENCADEADA_H
