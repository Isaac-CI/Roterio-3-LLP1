#include <iostream>
#include "Conta.h"


Conta::Conta(std::string s, int i, double d)
{
    nomeCliente = s;
    numero = i;
    saldo = d;
}
void Conta::sacar(double d)
{
    if(d <= saldo)
    {
        saldo -= (d > 0) ? d : -d;
    }else{
        std::cout << "O valor que se deseja sacar é maior que o saldo, tente novamente com uma valor diferente." << std::endl;
    }
}
void Conta::depositar(double d)
{
    saldo += (d > 0) ? d : -d;
}
std::string Conta::getNomeCliente()
{
    return nomeCliente;
}
int Conta::getNumero()
{
    return numero;
}
double Conta::getSaldo()
{
    return saldo;
}
void Conta::setNomeCliente(std::string s)
{
    nomeCliente = s;
}
void Conta::setNumero(int i)
{
    numero = i;
}
void Conta::setSaldo(double d)
{
    saldo = d;
}
