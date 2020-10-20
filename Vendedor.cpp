#include <string>
#include "Empregado.hpp"
#include "Vendedor.hpp"
#define MESES 12


Vendedor::Vendedor(std::string _nome, double _salarioHora, double _quotaMensalVendas, double _horasTrabalhadas)
{
	nome = setNome(_nome);
	salarioHora = setSalarioHora(_salarioHora);
	quotaMensalVendas = setQuotaMensalVendas(_quotaMensalVendas);
	horasTrabalhadas = setHorasTrabalhadas(_horasTrabalhadas);
}

double Vendedor::getQuotaMensalVendas()
{
	return quotaMensalVendas;
}

double Vendedor::setQuotaMensalVendas(double quotas)
{
	quotaMensalVendas = quotas;
	return quotaMensalVendas;
}

double Vendedor::quotaTotalAnual() 
{
	return getQuotaMensalVendas() * MESES;
}

void Vendedor::imprime()
{
	std::cout << "Nome: " << getNome() << std::endl;
	std::cout << "Salario Mes: " << pagamentoMes(horasTrabalhadas) << std::endl;
	std::cout << "Quota vendas: " << quotaTotalAnual() << std::endl;
	std::cout << std::endl;
}
