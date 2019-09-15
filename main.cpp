//main.cpp
#include <iostream>
#include <vector>
#include "classic.h"
#include <string>
using namespace std;
void showA(classic &x)
{

  std::cout << "Name" << x.get_name();
}

int main()
{

  classic c;
  classic2 c2;
  //polimorfismo
  std::vector<adt*> aaa;
  aaa.push_back(&c);
  aaa.push_back(&c2);
  for (auto & i : aaa)
  {
    cout << i->miembro_f() << endl;
  }
  

  std::cout << c.get_name() << std::endl;
  showA(c);
  std::cout << "coso de carlos(exponer metodo) "<< std::to_string(c.random_number()) << std::endl;
  std::cout << "coso de nurio(wrapper) " <<std::to_string(c.func()) << std::endl;

  return 1;
}
