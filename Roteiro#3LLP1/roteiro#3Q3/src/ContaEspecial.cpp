#include "ContaEspecial.h"

ContaEspecial::ContaEspecial(std::string s, int i, int i2, double d, double d2) : ContaCorrente(s,i,i2,d,d2)
{
    //ctor
}
double ContaEspecial::definirLimite()
{
    return 4 * salario;
}
