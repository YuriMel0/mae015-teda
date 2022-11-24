#ifndef LISTAENCADEADA_H
#define LISTAENCADEADA_H
#include "No.h"
#include "Pessoa.h"

class ListaEncadeada
{
    public:
        ListaEncadeada();
        virtual ~ListaEncadeada();
        void inserirInicio(Pessoa pessoa);
        void remover(int id);

    protected:
        No *inicio;

    private:
};

#endif // LISTAENCADEADA_H
