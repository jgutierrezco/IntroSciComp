#include <iostream>
#include <cstdlib>

typedef float REAL;

int main(int argc, char **argv)
{
    std::cout.precision(16);
    std::cout.setf(std::ios::scientific);
    int N = std::atoi(argv[1]);
    REAL under = 1.0, over = 1.0;

    for(int a = 1; a > 0 ; a*=2){
        std::cout << "Hizo overflow después de " + a << std::endl;
    } 

    for(int b = 1; b > 0 ; b/=2){
        std::cout << "Hizo underflow después de " + b << std::endl;
    }

}