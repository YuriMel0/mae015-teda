#include "No.h"
#include "Pessoa.h"

No::No(Pessoa p_dado)
{
    dado = p_dado;
    proximo = nullptr;
}

No::No()
{
    Pessoa pessoa(" ", 0);
    dado = pessoa;
    proximo = nullptr;
}

No::~No()
{
}
