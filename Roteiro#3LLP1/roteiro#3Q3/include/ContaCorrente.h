#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H
#include "Conta.h"


class ContaCorrente : public Conta
{
    public:
        ContaCorrente(std::string, int, int, double, double);
        double getSalario();
        int getLimite();
        void setSalario(double);
        void setLimite(int);
        virtual double definirLimite();

    protected:
        double salario;
        int limite;
    private:
};

#endif // CONTACORRENTE_H
