#ifndef CONTA_H
#define CONTA_H
#include <string>


class Conta
{
    public:
        Conta(std::string, int, double);
        void sacar(double);
        void depositar(double);
        void setNomeCliente(std::string);
        void setNumero(int);
        void setSaldo(double);
        double getSaldo();
        int getNumero();
        std::string getNomeCliente();

    protected:
        std::string nomeCliente;
        int numero;
        double saldo;
    private:
};

#endif // CONTA_H
