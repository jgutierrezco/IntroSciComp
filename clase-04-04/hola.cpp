#include <iostream> 
#include <string>

int main(void) 
{ 
  std::string nombre;
  std::cout << "Por favor escribe tu nombre" << std::endl;
  std::cin >> nombre;
  std::cout << "Hola " + nombre + "\n";
  return 0;
}