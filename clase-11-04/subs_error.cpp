#include <iostream>
#include <cmath>

typedef float REAL;

//Declaración: qué recibe y qué retorna
REAL sumk1(int k);
REAL sumk2(int k);
REAL sumk3(int k);

int main(void){
    std::cout.precision(16);
    std::cout.setf(std::ios::scientific);
    for(int k = 1; k<= 1000; k++){
        std::cout << "S1: " << sumk1(k) << "  " 
        << "S2: " << sumk2(k) << "  " 
        << "S3: " << sumk3(k) << "\n";
        std::cout << "Error(1,3) = " << std::fabs((sumk1(k)-sumk3(k))/sumk3(k)) << "  " 
        << "Error(2,3) = " << std::fabs((sumk2(k)-sumk3(k))/sumk3(k)) << "\n";
    }
    
    return 0;
}
//Implementación
REAL sumk1(int k){
    REAL suma = 0.0;
    for(int n = 1; n <= 2*k; n++){
        suma+= (std::pow(-1.0, n))*n/(n+1.0);
    }
    return suma;
}

REAL sumk2(int k){
    REAL suma1 = 0.0;
    REAL suma2 = 0.0;
    for(int n = 1; n <= k; n++){
        suma1+=(2.0*n-1.0)/(2.0*n);
        suma2+=(2.0*n)/(2.0*n+1.0);
    }
    REAL suma = -suma1 + suma2;
    return suma;
}

REAL sumk3(int k){
    REAL suma = 0.0;
    for(int n = 1; n <= k; n++){
        suma+=1.0/(2.0*n*(2.0*n+1.0));
    }
    return suma;
}