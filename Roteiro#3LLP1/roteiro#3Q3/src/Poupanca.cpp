#include "Poupanca.h"

Poupanca::Poupanca(std::string s, int i, int i2, double d, double d2) : Conta(s,i,d)
{
    variacao = i2;
    taxaDeRendimento = d2;
}
double Poupanca::render()
{
    if(taxaDeRendimento <= 1)
        taxaDeRendimento = 1.5;
    if(variacao == 51)
        return taxaDeRendimento;
    else{
        return ((taxaDeRendimento * saldo) - saldo);
    }
}
void Poupanca::setTaxaDeRendimento(double d)
{
    taxaDeRendimento = d;
}
void Poupanca::setVariacao(int i)
{
    variacao = i;
}
double Poupanca::getTaxaDeRendimento()
{
    return taxaDeRendimento;
}
int Poupanca::getVariacao()
{
    return variacao;
}
