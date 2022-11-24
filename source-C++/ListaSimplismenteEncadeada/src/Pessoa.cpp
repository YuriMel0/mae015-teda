#include "Pessoa.h"
#include <string>

using namespace std;

Pessoa::Pessoa(string p_nome, int p_id)
{
    nome = p_nome;
    id = p_id;
}

Pessoa::Pessoa()
{

}

Pessoa::~Pessoa()
{
    //dtor
}

string Pessoa::getNome()
{
    return nome;
}

int Pessoa::getId()
{
    return id;
}
