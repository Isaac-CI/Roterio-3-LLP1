#include "FuncionarioNaoExisteException.h"
#include <iostream>

FuncionarioNaoExisteException::FuncionarioNaoExisteException()
{
    std::cout << "Nao existe tal funcionario" << std::endl;
}
