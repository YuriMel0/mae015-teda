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
 *   M�dulo: defini��o da classe PESSOA (raiz da hierarquia de classes)
 *   Autor: Prof. Milton R Ramirez (milton@matematica.ufrj.br)
 *   Data cria��o  : 15 de setembro de 2022
 *   Data altera��o: 15 de setembro de 2022
 *
 *--------------------------------------------------------------
*/
#include "t_Pessoa.h"
#include <iostream>
#include <string>

t_Pessoa::t_Pessoa()
{
    //ctor
}

t_Pessoa::~t_Pessoa()
{
    //dtor
}

void t_Pessoa::Print(void)
{
    cout << "+" << string(64,'-') << "+" << endl;
    cout << "| CPF  : " << CPF  << string((64 - 8 - 11),' ') << "|" << endl;
    cout << "| Nome : " << Nome << string((64 - 8 - Nome.size() ),' ') << "|" << endl;
    cout << "+" << string(64,'-') << "+" << endl;
}
