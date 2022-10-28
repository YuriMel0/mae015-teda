template <typename T>
class No {
    T valor;
    No* proximo;
};

template <typename T>
class PilhaDinamica {
    private:
        No<T>* NoTopo;
    public:
        PilhaDinamica();
        ~PilhaDinamica();
        bool pilhaVazia();
        bool pilhaCheia();
        void inserir(T item);
        T remover();
        void imprimir();
        T consultaTopo();
        T consultaProx();
};