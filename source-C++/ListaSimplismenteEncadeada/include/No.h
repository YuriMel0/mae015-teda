#ifndef NO_H
#define NO_H
#include <string>

using namespace std;

class No
{
    public:
        No(string nome);
        virtual ~No();
        string nome;
        No *proximo;

    protected:
    private:
};

#endif // NO_H
