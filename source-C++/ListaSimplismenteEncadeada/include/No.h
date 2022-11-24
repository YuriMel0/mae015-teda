#ifndef NO_H
#define NO_H
#include <string>
#include "Pessoa.h"

using namespace std;

class No
{
    public:
        No(Pessoa dado);
        No();
        virtual ~No();
        Pessoa dado;
        No *proximo;

    protected:
    private:
};

#endif // NO_H
