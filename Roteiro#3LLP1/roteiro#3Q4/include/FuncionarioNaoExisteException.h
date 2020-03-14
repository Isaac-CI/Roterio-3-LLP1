#ifndef FUNCIONARIONAOEXISTEEXCEPTION_H
#define FUNCIONARIONAOEXISTEEXCEPTION_H
#include <stdexcept>


class FuncionarioNaoExisteException : public std::exception
{
    public:
        FuncionarioNaoExisteException();

    protected:

    private:
};

#endif // FUNCIONARIONAOEXISTEEXCEPTION_H
