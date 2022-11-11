#ifndef ARVOREBINARIA_H
#define ARVOREBINARIA_H
#include <iostream>
#include "Aluno.h"
#include <string>

using namespace std;

struct No {
    Aluno aluno;
    No* filhoEsquerda;
    No* filhoDireita;
};

class ArvoreBinaria
{
    public:
        ArvoreBinaria();
        virtual ~ArvoreBinaria();
        void deletarArvore(No* NoAtual);
        No* obterRaiz();
        bool estaVazio();
        bool estaCheio();
        void inserir(Aluno aluno);
        void remover(Aluno aluno);
        void buscar(Aluno& aluno, bool& busca);
        void imprimirPreOrdem(No* NoAtual);
        void imprimirEmOrdem(No* NoAtual);
        void imprimirPosOrdem(No* NoAtual);

    protected:

    private:
        No *raiz;
};

#endif // ARVOREBINARIA_H
