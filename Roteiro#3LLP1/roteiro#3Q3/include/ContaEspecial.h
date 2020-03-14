#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H
#include "ContaCorrente.h"


class ContaEspecial : public ContaCorrente
{
    public:
        ContaEspecial(std::string, int, int, double, double);
        double definirLimite()override;

    protected:

    private:
};

#endif // CONTAESPECIAL_H
