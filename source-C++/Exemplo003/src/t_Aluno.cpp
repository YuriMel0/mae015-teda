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
 *   M�dulo: defini��o da Classe ALUNO
 *   Autor: Prof. Milton R Ramirez (milton@matematica.ufrj.br)
 *   Data cria��o  : 15 de setembro de 2022
 *   Data altera��o: 15 de setembro de 2022
 *
 *--------------------------------------------------------------
*/#include "t_Aluno.h"
#include <iostream>

t_Aluno::t_Aluno()
{
    //ctor
}

t_Aluno::~t_Aluno()
{
    //dtor
}

void t_Aluno::Cadastra(t_DRE pDRE, t_CPF pCPF, string pNome)
{
    t_Pessoa::Cadastra(pCPF, pNome); // cadastra os dados da "Pessoa Aluno"
    DRE = pDRE;
}

void t_Aluno::Print(void)
{
    cout << "+" << string(64,'-') << "+" << endl;
    cout << "| ALUNO" << string((64 - 6 ),' ') << "|" << endl;
    t_Pessoa::Print();
//    cout << "+" << string(64,'-') << "+" << endl;
    cout << "| DRE  : " << DRE  << string((64 - 8 - 9),' ') << "|" << endl;
    cout << "+" << string(64,'-') << "+" << endl;
}
