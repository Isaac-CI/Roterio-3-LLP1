#include "OrcamentoEstouradoException.h"
#include <iostream>

OrcamentoEstouradoException::OrcamentoEstouradoException()
{
    std::cout << "O valor da folha de pagamento supera o orcamento total" << std::endl;
}
