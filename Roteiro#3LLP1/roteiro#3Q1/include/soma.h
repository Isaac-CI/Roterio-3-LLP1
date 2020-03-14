#ifndef SOMA_H
#define SOMA_H
#include "operacao.h"

class soma : public operacao
{
    public:
        soma();
        double generica(double, double)override;

    protected:

    private:
};

#endif // SOMA_H
