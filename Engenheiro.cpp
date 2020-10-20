#include <string>
#include "Empregado.hpp"
#include "Engenheiro.hpp"


Engenheiro::Engenheiro(std::string _nome, double _salarioHora, int _projetos, double _horasTrabalhadas)
{
  nome = setNome(_nome);
  salarioHora = setSalarioHora(_salarioHora);
  projetos = setProjetos(_projetos);
  horasTrabalhadas = setHorasTrabalhadas(_horasTrabalhadas);
}

int Engenheiro::getProjetos()
{
  return projetos;
}
    
int Engenheiro::setProjetos(int numProjetos)
{
  projetos = numProjetos;
  return projetos;
}

void Engenheiro::imprime()
{
  std::cout << "Nome: " <<  getNome() << std::endl;
  std::cout << "Salario Mes: " << pagamentoMes(horasTrabalhadas) << std::endl;
  std::cout << "Projetos: " << getProjetos() << std::endl;
  std::cout << std::endl;
}
