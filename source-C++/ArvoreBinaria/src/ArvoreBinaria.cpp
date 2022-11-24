#include "ArvoreBinaria.h"
#include <iostream>

using namespace std;

ArvoreBinaria::ArvoreBinaria()
{
    raiz = nullptr;
}

ArvoreBinaria::~ArvoreBinaria()
{
    deletarArvore(raiz);
}

void ArvoreBinaria::deletarArvore(No* NoAtual)
{
    if(NoAtual != nullptr) {
        deletarArvore(NoAtual->filhoEsquerda);
        deletarArvore(NoAtual->filhoDireita);

        delete NoAtual;
    }
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
                if(aluno.obterCR() < temporario->aluno.obterCR()) {
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
    removerBusca(aluno, raiz);
}

void ArvoreBinaria::removerBusca(Aluno aluno, No*& NoAtual)
{
    if(aluno.obterCR() < NoAtual->aluno.obterCR()) {
        removerBusca(aluno, NoAtual->filhoEsquerda);
    } else if(aluno.obterCR() > NoAtual->aluno.obterCR()) {
        removerBusca(aluno, NoAtual->filhoDireita);
    } else {
        deletarNo(NoAtual);
    }
}

void ArvoreBinaria::deletarNo(No*& NoAtual)
{
    No *temporario = NoAtual;
    if(NoAtual->filhoEsquerda == nullptr) {
        NoAtual = NoAtual->filhoDireita;
        delete temporario;
    } else if(NoAtual->filhoDireita == nullptr) {
        NoAtual = NoAtual->filhoEsquerda;
        delete temporario;
    } else {
        Aluno alunoSucessor;
        obterSucessor(alunoSucessor, NoAtual);
        NoAtual->aluno = alunoSucessor;
        removerBusca(alunoSucessor, NoAtual->filhoDireita);
    }
}

void ArvoreBinaria::obterSucessor(Aluno& alunoSucessor, No* temporario)
{
    temporario = temporario->filhoDireita;
    while(temporario->filhoEsquerda != nullptr) {
        temporario = temporario->filhoEsquerda;
    }
    alunoSucessor = temporario->aluno;
}

void ArvoreBinaria::buscar(Aluno& aluno, bool& busca)
{
    busca = false;
    No *NoAtual = raiz;
    while(NoAtual != nullptr){
        if(aluno.obterCR() < NoAtual->aluno.obterCR()) {
            NoAtual = NoAtual->filhoEsquerda;
        } else if(aluno.obterCR() > NoAtual->aluno.obterCR()) {
            NoAtual = NoAtual->filhoDireita;
        } else {
            busca = true;
            aluno = NoAtual->aluno;
            break;
        }
    }
}

void ArvoreBinaria::imprimirPreOrdem(No* NoAtual)
{
    if(NoAtual != nullptr) {
        cout << NoAtual->aluno.obterNome() << ": " << NoAtual->aluno.obterCR() << endl;

        imprimirPreOrdem(NoAtual->filhoEsquerda);
        imprimirPreOrdem(NoAtual->filhoDireita);
    }
}

void ArvoreBinaria::imprimirEmOrdem(No* NoAtual)
{
    if(NoAtual != nullptr) {
        cout << NoAtual->aluno.obterNome() << ": " << NoAtual->aluno.obterCR() << endl;

        imprimirEmOrdem(NoAtual->filhoDireita);
    }
}

void ArvoreBinaria::imprimirPosOrdem(No* NoAtual)
{
    if(NoAtual != nullptr) {
        imprimirPosOrdem(NoAtual->filhoEsquerda);
        imprimirPosOrdem(NoAtual->filhoEsquerda);

        cout << NoAtual->aluno.obterNome() << ": " << NoAtual->aluno.obterCR() << endl;
    }
}
