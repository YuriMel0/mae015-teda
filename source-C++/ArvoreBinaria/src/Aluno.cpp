#include "Aluno.h"
#include <string>
using std::string;

using namespace std;

Aluno::Aluno()
{
    this->CR = 0;
    this->nome = " ";
}

Aluno::Aluno(int p_cr, string p_nome)
{
    CR = p_cr;
    nome = p_nome;
}

string Aluno::obterNome()
{
    return nome;
}

float Aluno::obterCR()
{
    return CR;
}
