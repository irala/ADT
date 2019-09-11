//main.cpp
#include <iostream>
#include "classic.h"


void showA(classic &x)
{

  std::cout << "Name" << x.get_name();
}


int main()
{

  classic c;
  std::cout << c.get_name() << std::endl;
  showA(c);
  return 1;
}

