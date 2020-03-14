#include <iostream>
#include <string>
#include "Conta.h"
#include "ContaCorrente.h"
#include "ContaEspecial.h"
#include "Poupanca.h"

using namespace std;

int main()
{
    string s1 = "Fulano", s2 = "Beltrano", s3 = "Cicrano";
    Poupanca *fulano = new Poupanca(s1, 12345567, 51, 1000, 1);
    Conta *beltrano = new Conta(s2, 87654321, 20000);
    ContaCorrente *cicrano = new ContaCorrente(s3, 04576543, 100, 5000, 10000);
    ContaEspecial *deltrano = new ContaEspecial(s3, 04576543, 100, 5000, 10000);

    cout << fulano->render() << endl;
    fulano->setTaxaDeRendimento(1.6);
    fulano->setVariacao(50);
    cout << fulano->render() << endl;

    cout << beltrano->getSaldo() << endl;
    beltrano->sacar(1000);
    cout << beltrano->getSaldo() << endl;
    beltrano->depositar(1500);
    cout << beltrano->getSaldo() << endl;

    cout << cicrano->getLimite() << endl;
    cout << cicrano->definirLimite() << endl;

    cout << deltrano->getLimite() << endl;
    cout << deltrano->definirLimite() << endl;


    return 0;
}
