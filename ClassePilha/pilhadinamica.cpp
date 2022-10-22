#include <iostream>
#include <pilhadinamica.h>
#include <cstddef>

using namespace std;

    pilhadinamica::pilhadinamica()
    {
        NoTopo = NULL;
    }

    pilhadinamica::~pilhadinamica()
    {}

    bool pilhadinamica::pilhavazia()
    {
        return (NoTopo == NULL);
    }

    bool pilhadinamica::pilhacheia()
    {
        No* NoNovo;
        try
        {
            NoNovo = new No;
            delete NoNovo;
            return false;
        }
        catch(bad_alloc exception)
        {
            return true;
        }
        
    }

    void pilhadinamica::inserir(t_dado item)
    {}

    t_dado pilhadinamica::remover()
    {}

    void pilhadinamica::imprimir()
    {}