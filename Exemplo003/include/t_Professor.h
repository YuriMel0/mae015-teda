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
 *   M�dulo: Classe PROFESSOR
 *   Autor: Prof. Milton R Ramirez (milton@matematica.ufrj.br)
 *   Data cria��o  : 15 de setembro de 2022
 *   Data altera��o: 15 de setembro de 2022
 *
 *--------------------------------------------------------------
*/
#ifndef T_PROFESSOR_H
#define T_PROFESSOR_H

#include "t_Pessoa.h"
#include <string>

using namespace std;
typedef unsigned long long int t_SIAPE;

class t_Professor : public t_Pessoa
{
    public:
        t_Professor();
        virtual ~t_Professor();
        void Cadastra(t_SIAPE pSIAPE, t_CPF pCPF, string pNome);
        void Print(void);
        void InsereOrientando(unsigned int Id_Aluno_no_array);
        void PrintListaDeOrientados(void);


    protected:

    private:
        // Constantes internas
        static const unsigned int MAX_ORIENTADOS_POR_PROFESSOR = 10;
        // Atributos internos
        unsigned int  qnt_orientados;
        // Atributos dos objetos (membros dados)
        t_SIAPE SIAPE;
        unsigned int lst_Orientados[MAX_ORIENTADOS_POR_PROFESSOR];
        // Area de metodos internos
        unsigned int Busca_pos_vazia(void);
};

#endif // T_PROFESSOR_H
