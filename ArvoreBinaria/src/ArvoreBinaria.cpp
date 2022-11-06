#include "ArvoreBinaria.h"
#include <iostream>

using namespace std;

ArvoreBinaria::ArvoreBinaria()
{
    raiz = nullptr;
}

ArvoreBinaria::~ArvoreBinaria()
{
}

void ArvoreBinaria::deletarArvore(No* NoAtual)
{

}

No* ArvoreBinaria::obterRaiz()
{
    return raiz;
}

bool ArvoreBinaria::estaVazio()
{
    return (raiz == nullptr);
}

bool ArvoreBinaria::estaCheio()
{
    try {
        No* temp = new No;
        delete temp;
        return false;
    } catch(bad_alloc exception) {
        return true;
    }
}

void ArvoreBinaria::inserir(Aluno aluno)
{

}

void ArvoreBinaria::remover(Aluno aluno)
{

}

void ArvoreBinaria::buscar(Aluno& aluno, bool& busca)
{

}

void ArvoreBinaria::imprimirPreOrdem(No* NoAtual)
{

}

void ArvoreBinaria::imprimirEmOrdem(No* NoAtual)
{

}

void ArvoreBinaria::imprimirPosOrdem(No* NoAtual)
{

}
