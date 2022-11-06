#include "Aluno.h"

using namespace std;

Aluno::Aluno()
{
    this->ra = 0;
    this->nome = " ";
}

Aluno(int p_ra, std::string p_nome)
{
    ra = p_ra;
    nome = p_nome;
}

string Aluno::obterNome()
{
    return nome;
}

int Aluno::obterRa()
{
    return ra;
}
