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
#define A 5


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
        cout << " Nome: " << Nome << endl;
        cout << " DRE : " << DRE << endl;
        cout << " CR  : " << CR << "\n\n";
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
    double Nota_mec;

    void Cadastro(string pCodigo_Curso, string pNome_Curso, double pNota_mec)
    {
        Codigo_Curso = pCodigo_Curso;
        Nome_Curso = pNome_Curso;
        Nota_mec = pNota_mec;

    }

    void Print(void)
    {
        cout << "\n" << " Registro do Curso " << endl;
        cout << " Codigo Curso : " << Codigo_Curso << endl;
        cout << " Nome Curso: " << Nome_Curso << endl;
        cout << " Nota MEC: " << Nota_mec << "\n\n";
    }
    double operator +(t_Curso B)
    {
        return (Nota_mec + B.Nota_mec);
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

    t_Curso c1, c2;
    c1.Cadastro("BCMT01", "BCMT", 4.5);
    c2.Cadastro("ICP", "BCC", 3.5);
    c1.Print();
    c2.Print();

    cout << "Media entre as notas do MEC dos cursos c1 e c2  : " << Media(c1,c2) << endl;
   return 0;
}
