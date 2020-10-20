#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H
#include "Empregado.hpp"
#include <iostream>
#include <string>

class Engenheiro : public Empregado
{
    public:
        Engenheiro(std::string _nome, double _salarioHora, int _projetos, double _horasTrabalhadas);
        int getProjetos();
        int setProjetos(int numProjetos);
        void imprime();
    
    private:  
        int projetos;

};
#endif

