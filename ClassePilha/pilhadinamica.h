typedef int t_dado;

struct No {
    t_dado valor;
    No* proximo;
};

class pilhadinamica {
    private:
        No* NoTopo;
    public:
        pilhadinamica();
        ~pilhadinamica();
        bool pilhavazia();
        bool pilhacheia();
        void inserir(t_dado item);
        t_dado remover();
        void imprimir();
        t_dado consultatopo();
        t_dado consultaprox();

};