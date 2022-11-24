#ifndef PESSOA_H
#define PESSOA_H
#include <string>

using namespace std;

class Pessoa
{
    public:
        Pessoa(string p_nome, int p_id);
        Pessoa();
        virtual ~Pessoa();
        string getNome();
        int getId();

    protected:
        string nome;
        int id;
    private:
};

#endif // PESSOA_H
