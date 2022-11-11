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
        No *temporario = new No;
        delete temporario;
        return false;
    } catch(bad_alloc exception) {
        return true;
    }
}

void ArvoreBinaria::inserir(Aluno aluno)
{
    if(estaCheio())
    {
        cout << "Arvore esta cheia, impossivel inserir novo Aluno" << endl;
    } else {
        No *NovoNo = new No();
        NovoNo->aluno = aluno;
        NovoNo->filhoEsquerda = nullptr;
        NovoNo->filhoDireita = nullptr;

        if(estaVazio())
        {
            raiz = NovoNo;
        } else {
            No *temporario = raiz;
            while(temporario != nullptr) {
                if(aluno.obterCR < temporario->aluno.obterCR()) {
                    if(temporario->filhoEsquerda == nullptr) {
                        temporario->filhoEsquerda = NovoNo;
                        break;
                    } else {
                        temporario->filhoEsquerda;
                    }
                } else {
                    if(temporario->filhoDireita == nullptr) {
                        temporario->filhoDireita = NovoNo;
                        break;
                    } else {
                        temporario = temporario->filhoDireita;
                    }
                }
            }
        }
    }
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
