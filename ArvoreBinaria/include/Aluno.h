#ifndef ALUNO_H
#define ALUNO_H
#include <iostream>
#include <string>

using namespace std;

class Aluno
{
    public:
        Aluno();
        Aluno(int, string);
        string obterNome();
        float obterCR();

    protected:

    private:
        float CR;
        std::string nome;
};

#endif // ALUNO_H
