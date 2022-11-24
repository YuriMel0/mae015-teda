#include <iostream>
#include "ArvoreBinaria.h"
#include <string>


using namespace std;

int main()
{
    ArvoreBinaria arvoreAlunos;
    int opcao, CR, imprimir;
    string nome;
    bool busca = false;

    do {
        cout << "Digite 0 para parar o algoritmo!" << endl;
        cout << "Digite 1 para inserir um elemento!" << endl;
        cout << "Digite 2 para remover um elemento!" << endl;
        cout << "Digite 3 para buscar um elemento!" << endl;
        cout << "Digite 4 para imprimir a arvore!" << endl;
        cin >> opcao;

        if (opcao == 1) {
            cout << "Digite o nome do aluno: " << endl;
            cin >> nome;
            cout << "Informe CR do aluno: " << endl;
            cin >> CR;

            Aluno aluno(CR, nome);

            if (arvoreAlunos.estaCheio()) {
                cout << "Arvore cheia, impossivel inserir aluno" << endl;
            } else {
                arvoreAlunos.inserir(aluno);
            }
        } else if(opcao == 2) {
            cout << "Digite o CR do aluno a ser removido! " << endl;
            cin >> CR;
            Aluno aluno(CR, " ");
            arvoreAlunos.remover(aluno);
        } else if(opcao == 3) {
            cout << "Digite o CR do aluno a ser buscado!" << endl;
            cin >> CR;
            Aluno aluno(CR, " ");
            arvoreAlunos.buscar(aluno, busca);
            if (busca) {
                cout << "Elemento encontrado!" << endl;
                cout << "Nome: " << aluno.obterNome() << endl;
                cout << "CR: " << aluno.obterCR() << endl;
            } else {
                cout << "Elemento nao econtrado!";
            }
        } else if(opcao == 4) {
            cout << "Digite 1 para imprimir em pre ordem!" << endl;
            cout << "Digite 2 para imprimir em ordem!" << endl;
            cout << "Digite 1 para imprimir em pos ordem!" << endl;
            cin >> imprimir;

            if(imprimir == 1) {
                arvoreAlunos.imprimirPreOrdem(arvoreAlunos.obterRaiz());
            } else if(imprimir == 2) {
                arvoreAlunos.imprimirEmOrdem(arvoreAlunos.obterRaiz());
            } else {
                arvoreAlunos.imprimirPosOrdem(arvoreAlunos.obterRaiz());
            }
        }

    }while(opcao != 0);

    return 0;
}
