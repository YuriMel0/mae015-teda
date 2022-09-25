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
 *   M�dulo: Classe ALUNO
 *   Autor: Prof. Milton R Ramirez (milton@matematica.ufrj.br)
 *   Data cria��o  : 15 de setembro de 2022
 *   Data altera��o: 15 de setembro de 2022
 *
 *--------------------------------------------------------------
*/
#ifndef T_ALUNO_H
#define T_ALUNO_H

#include "t_Pessoa.h"
#include <string>

using namespace std;
typedef unsigned long long int t_DRE;

class t_Aluno : public t_Pessoa
{
    public:
        t_Aluno();
        virtual ~t_Aluno();
        void Cadastra(t_DRE pDRE, t_CPF pCPF, string pNome);
        void Print(void);

    protected:

    private:
        t_DRE   DRE;
        double  CR;
};

#endif // T_ALUNO_H
