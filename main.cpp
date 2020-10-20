#include "Engenheiro.hpp"
#include "Vendedor.hpp"

int main() 
{
  Engenheiro eng1("Joao Snow", 35, 3, 9.5); 
  eng1.imprime();
  
  Engenheiro eng2("Daniela Targaryen", 30, 1, 8); 
  eng2.imprime();
  
  Engenheiro eng3("Bruno Satrk", 30, 2, 8); 
  eng3.imprime();
  
  Vendedor vend1("Tonho Lannister", 20, 5000, 6);  
  vend1.imprime();
  
  Vendedor vend2("Jose Mormont", 25, 3000, 8);
  vend2.imprime();
	
  Vendedor vend3("Sonia Stark", 30, 4000, 8);
  vend3.imprime();  
  
  return 0;	
}