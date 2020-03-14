#include "FuncionarioNaoExisteException.h"
#include <iostream>

FuncionarioNaoExisteException::FuncionarioNaoExisteException()
{
    std::cout << "Tal funcionario nao existe, verifique se inseriu corretamente as informacoes." << std::endl;
}
