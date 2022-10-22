typedef int t_dado;

struct No {
    t_dado valor;
    No* proximo;
};

class pilhadinamica {
    private:
        No* NoTopo;
    public:
        pilhadinamica(); // construtor
        ~pilhadinamica(); // destrutor
        bool pilhavazia(); // verifica se a pilha está vazia
        bool pilhacheia(); // verifica se a pilha está cheia
        void inserir(t_dado item); // push
        t_dado remover(); // pop
        void imprimir(); // imprimir a pilha

};