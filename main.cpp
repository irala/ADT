//main.cpp
#include <iostream>
#include "classic.h"
#include <string>
void showA(classic &x)
{

  std::cout << "Name" << x.get_name();
}

int main()
{

  classic c;
  std::cout << c.get_name() << std::endl;
  showA(c);
  std::cout << "coso de carlos(exponer metodo) "<< std::to_string(c.random_number()) << std::endl;
  std::cout << "coso de nurio(wrapper) " <<std::to_string(c.func()) << std::endl;

  return 1;
}
