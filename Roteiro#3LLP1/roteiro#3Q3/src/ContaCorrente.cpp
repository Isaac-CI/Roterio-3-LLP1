#include "ContaCorrente.h"

ContaCorrente::ContaCorrente(std::string s, int i, int i2, double d, double d2) : Conta(s,i,d)
{
    limite = i2;
    salario = d2;
}
double ContaCorrente::getSalario()
{
    return salario;
}
int ContaCorrente::getLimite()
{
    return limite;
}
void ContaCorrente::setSalario(double d)
{
    salario = d;
}
void ContaCorrente::setLimite(int i)
{
    limite = i;
}
double ContaCorrente::definirLimite()
{
    return (2 * salario);
}
