#include <iostream>
#include <cstdlib>

typedef double REAL;

int main(int argc, char **argv)
{   
  std::cout.precision(20);
  std::cout.setf(std::ios::scientific);
  REAL eps = 1.0;
  REAL one = 1.0+eps;
  while(one!=1.0){
    one = 1.0 + eps;
    eps/=2;
    std::cout << "one: " << one << "  ";
    std::cout << "eps: " << eps <<std::endl;
  }
    

}