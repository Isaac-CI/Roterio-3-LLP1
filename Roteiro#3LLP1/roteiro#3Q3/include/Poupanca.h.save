#ifndef POUPANCA_H
#define POUPANCA_H
#include "Conta.h"


class Poupanca : public Conta
{
    public:
        Poupanca(std::string, int, int, double, double);
        double render();
        void setTaxaDeRendimento(double);
        void setVariacao(int);
        double getTaxaDeRendimento();
        int getVariacao();

    protected:

    private:
        int variacao;
        double taxaDeRendimento;
};

#endif // POUPANCA_H
