#include <iostream>
#include "operacao.h"
#include "soma.h"

using namespace std;

int main()
{
    /*
        Polimorfismo � um conceito do paradigma de programa��o orientada a objetos que consiste
        na possibilidade de representar o comportamento de classes concetas por meio de classes
        abstratas, ou seja, possibilita que classes distintas tenham acesso a um mesmo m�todo ou
        suas respectivas sobrecargas.
        Neste projeto, o m�todo generica, presente tanto na classe operacao quanto na classe soma
        � um exemplo de m�todo polim�rfico.
    */

        operacao retro;
        soma sum;
        cout << "Polimorfismo e um conceito do paradigma de programa��o orientada a objetos que consiste"<<"\n"<<
        "na possibilidade de representar o comportamento de classes concetas por meio de classes"<<"\n"<<
        "abstratas, ou seja, possibilita que classes distintas tenham acesso a um mesmo metodo ou"<<"\n"<<
        "suas respectivas sobrecargas."<<"\n"<<
        "Neste projeto, o metodo \"generica\", presente tanto na classe operacao quanto na classe soma"<<"\n"<<
        "e um exemplo de metodo polimorfico." << endl;

        cout << "generica 2.3, 2.5 de operacao: " << retro.generica(2.3, 2.5)<< endl;
        cout << "generica 2.3, 2.5 de soma: " << sum.generica(2.3, 2.5)<<endl;

    return 0;
}
