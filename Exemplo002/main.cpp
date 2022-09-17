/*
 * UFRJ - Universidade Federal do Rio de Janeiro
 * IM   - Instituto de Matemática
 * DMA  - Departamento de Matemática Aplicada
 *
 * Exemplo 002: Aluno e Curso
 *
 * Autor: Yuri Melo (yurimelo@ufrj.br)
 * Data alteração: 17 de setembro de 2022
 *
*/
#include <iostream>

using namespace std;

typedef unsigned long int t_DRE;

struct t_Aluno
{
    t_DRE   DRE;
    string  Nome;
    double  CR;

    void Cadastro(t_DRE pDRE, string pNome, double pCR = 0)
    {
        DRE = pDRE;
        Nome = pNome;
        CR = pCR;
    }

    void Print(void)
    {
        cout << " Registro de Aluno " << endl;
        cout << " DRE : " << DRE << endl;
        cout << " Nome: " << Nome << endl;
        cout << " CR  : " << CR << endl;
        cout << "                       " << endl;
    }

    double operator +(t_Aluno B)
    {
        return (CR + B.CR);
    }

};

class t_Curso
{
 public:
    string  Codigo_Curso;
    string  Nome_Curso;
    t_Aluno lista_de_alunos[30];

    void Cadastro(string pCodigo_Curso, string pNome_Curso)
    {
        Codigo_Curso = pCodigo_Curso;
        Nome_Curso = pNome_Curso;
    }

    void Print(void)
    {
        cout << " Registro do Curso " << endl;
        cout << " Codigo Curso : " << Codigo_Curso << endl;
        cout << " Nome Curso: " << Nome_Curso << endl;
        cout << " Alunos : " << endl;
    }
};


template <class T>
double Media(T a1, T a2)
{
    return (a1 + a2)/2;
}


int main()
{

    cout << "+-------------------------------------------- +" << endl;
    cout << "|         Exemplo 002: Aluno e Curso          |" << endl;
    cout << "+-------------------------------------------- +" << endl;

    t_Aluno a1;
    a1.Cadastro(12222222222, "fic", 4.5);
    a1.Print();

    t_Curso c1;
    c1.Cadastro("MAE015", "Estrutura de dados");
    c1.Print();

    return 0;
}
