#include "ListaEncadeada.h"

ListaEncadeada::ListaEncadeada()
{
    inicio = nullptr;
    fim = nullptr;

}

ListaEncadeada::~ListaEncadeada()
{
}

bool ListaEncadeada::listaVazia()
{
    if (inicio)
    {
        return false;
    } else {
        return true;
    }
}

bool ListaEncadeada::listaCheia()
{
    No *NovoNo;
    try
    {
        NovoNo = new No;
        delete NovoNo;
        return false;
    }
    catch(bad_alloc exception)
    {
        return true;
    }
}

void ListaEncadeada::inserirInicio(string nome)
{

}
void ListaEncadeada::remover()
{

}
