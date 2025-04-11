#include <iostream>
#include <cmath>

typedef float REAL;

//Declaración: qué recibe y qué retorna
REAL sumk(int k);

int main(void){
    std::cout.precision(16);
    std::cout.setf(std::ios::scientific);
    for(int k = 1; k<= 1000; k++){
        std::cout << sumk(k) << "\n";
    }
    
    return 0;
}
//Implementación
REAL sumk(int k){
    REAL suma = 0.0;
    for(int ii = 1; ii <= k; ii++){
        suma+=0.1;
    }
    REAL aux = k/10.0;
    return std::fabs(aux - suma);
}