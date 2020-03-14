#include "SistemaGerenciaFolha.h"

SistemaGerenciaFolha::SistemaGerenciaFolha(double d)
{
    maxBudget = d;
}
void SistemaGerenciaFolha::setFuncionarios(std::vector<Funcionario*> v)
{
    for(unsigned int i = 0; i < v.size(); i++)
    {
        funcionarios[i] = v[i];
    }
}
double SistemaGerenciaFolha::calculaValorTotalFolha()
{
    OrcamentoEstouradoException erro;
    double d = 0;
    for(unsigned int n = 0; n < funcionarios.size(); n++)
    {
        d += funcionarios[n]->calculaSalario();
    }
    if(d > maxBudget)
    {
        throw erro;
        return -1;
    }else{
        return d;
    }
}
double SistemaGerenciaFolha::consultaSalarioFuncionario(std::string s, int i)
{
    FuncionarioNaoExisteException erro;
    unsigned int n;
    bool flag = false;
    for(n = 0; n < funcionarios.size(); n++)
    {
        if(funcionarios[n]->getMatricula() == i && funcionarios[n]->getNome() == s)
        {
            flag = true;
            break;
        }
    }
    if(flag)
    {
        return funcionarios[n]->calculaSalario();
    }else{
        throw erro;
        return -1;
    }
}
