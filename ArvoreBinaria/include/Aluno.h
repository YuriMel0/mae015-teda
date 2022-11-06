#ifndef ALUNO_H
#define ALUNO_H
#include <iostream>
#include <string>

using namespace std;

class Aluno
{
    public:
        Aluno();
        Aluno(int p_ra, std::string p_nome);
        string obterNome();
        int obterRa();

    protected:

    private:
        int ra;
        std::string nome;
};

#endif // ALUNO_H
