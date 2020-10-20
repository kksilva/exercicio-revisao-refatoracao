#ifndef VENDEDOR_H
#define VENDEDOR_H
#include "Empregado.hpp"
#include <iostream>
#include <string>

class Vendedor : public Empregado 
{
    public: 
        Vendedor(std::string _nome, double _salarioHora, double _quotaMensalVendas, double _horasTrabalhadas);
	    double quotaTotalAnual();
        double getQuotaMensalVendas();
        double setQuotaMensalVendas(double quotas);
        void imprime();

    private:
        double quotaMensalVendas;
};
#endif
