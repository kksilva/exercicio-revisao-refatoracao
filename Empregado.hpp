#ifndef EMPREGADO_H
#define EMPREGADO_H
#define EXTRAS 8
#include <iostream>
#include <string>

class Empregado 
{
  public:
    std::string getNome()
    {
      return nome;
    }

    std::string setNome(std::string _nome)
    {
      nome = _nome;
      return nome;
    }

    double getSalarioHora()
    {
      return salarioHora;
    }
            
    double setSalarioHora(double valor)
    {
      salarioHora = valor;
      return salarioHora;
    }

    double getHorasTrabalhadas()
    {
      return horasTrabalhadas;
    }

    double setHorasTrabalhadas(double horas)
    {
      horasTrabalhadas = horas;
      return horasTrabalhadas;
    }

    double pagamentoMes(double horasTrabalhadas)
    {
      double horasTotaisTrabalhadas = horasTrabalhadas;
      //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
      if (horasTrabalhadas > EXTRAS) 
      {
        double horasExtras = horasTrabalhadas - EXTRAS;
        horasTotaisTrabalhadas += horasExtras/ 2;
      }
            
      return horasTotaisTrabalhadas * salarioHora;
    }

    std::string nome;
    double salarioHora;  
    double horasTrabalhadas;
};
#endif