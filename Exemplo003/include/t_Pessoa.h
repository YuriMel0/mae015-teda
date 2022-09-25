/*-------------------------------------------------------------
 * UFRJ - Universidade Federal do Rio de Janeiro
 * IM   - Instituto de Matem�tica
 * DMA  - Departamento de Matem�tica Aplicada
 *
 *   MAE015 - T�picos em Engenharia de Dados A
 *            "Estruturas de Dados (e seus algoritmos)"
 *
 *   Semana 03  : Introdu��o a linguagem C/C++
 *   Exemplo 003: Heran�a, Hierarquia de Classes e a 1a solu��o para relacionamento 1-N
 *
 *   M�dulo Classe PESSOA (raiz da hierarquia de classes)
 *   Autor: Prof. Milton R Ramirez (milton@matematica.ufrj.br)
 *   Data cria��o  : 15 de setembro de 2022
 *   Data altera��o: 15 de setembro de 2022
 *
 *--------------------------------------------------------------
*/
#ifndef T_PESSOA_H
#define T_PESSOA_H

#include <string>
using namespace std;

typedef unsigned long long int t_CPF;

class t_Pessoa
{
    public:
        t_Pessoa();
        virtual ~t_Pessoa();
        void Cadastra(t_CPF pCPF, string pNome) { CPF=pCPF; Nome=pNome; } // inline
        void Print(void);

    protected:

    private:
        t_CPF   CPF;
        string  Nome;
};

#endif // T_PESSOA_H
