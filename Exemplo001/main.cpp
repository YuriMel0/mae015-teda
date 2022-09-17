/*
 * UFRJ - Universidade Federal do Rio de Janeiro
 * IM   - Instituto de Matemática
 * DMA  - Departamento de Matemática Aplicada
 *
 * Exemplo 001: Calculadora Vetorial
 *
 * Autor: Yuri Melo (yurimelo@ufrj.br)
 * Data alteração: 17 de setembro de 2022
*/
#include <iostream>

using namespace std;

void Apresenta_texto_menu(void)
{
    cout << "+----------------------------------+" << endl;
    cout << "1 - Multiplicacao por escalar" << endl;
    cout << "2 - Soma vetorial" << endl;
    cout << "3 - Combinacao Linear" << endl;
    cout << "4 - Produto escalar euclidiano" << endl;
    cout << "5 - Norma 2 vetorial" << endl;
    cout << "6 - Dependencias linear" << endl;
    cout << "+----------------------------------+" << endl;
    cout << "+ aperte a tecla 's' para sair" << endl;
    cout << "+----------------------------------+" << endl;
}

void Executa_opcao_1(void)
{


    cout << "* Multiplicacao por escalar *" << endl;
};

void Executa_opcao_2(void)
{
    cout << "* Soma vetorial *" << endl;
}

void Executa_opcao_3(void)
{
    cout << "* Combinacao Linear *" << endl;
}

void Executa_opcao_4(void)
{
    cout << "* Produto escalar euclidiano *" << endl;
}

void Executa_opcao_5(void)
{
    cout << "* Norma 2 vetorial *" << endl;
}

void Executa_opcao_6(void)
{
    cout << "* Dependencias linear *" << endl;
}

void Menu(void)
{
    char opcao_escolhida;

    do {
        Apresenta_texto_menu();
        cin >> opcao_escolhida;
        switch (opcao_escolhida) {
            case '1' : Executa_opcao_1(); break;
            case '2' : Executa_opcao_2(); break;
            case '3' : Executa_opcao_3(); break;
            case '4' : Executa_opcao_4(); break;
            case '5' : Executa_opcao_5(); break;
            case '6' : Executa_opcao_6(); break;
            case 's' : break;
            default  : cout << "Opcao invalida, tente novamente, ou 's' para sair" << endl;
        }
    } while (opcao_escolhida != 's');
}



int main()
{
    cout << "Exemplo 001: Calculadora Vetorial" << endl;
    Menu();
    return 0;
}
