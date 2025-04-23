#include <iostream>
#include <cmath>

/*
Para graficar se puede ejecutar desde gnuplot:

set logscale y
plot "nombre.csv" using 1:4 skip 1 with lines
*/

typedef float REAL;

int main(void){
    // Encabezado de la tabla
    std::cout << "k" << " "
    << "S1" << " "
    << "S2" << " "
    << "Rel_Dif\n";

    // Las sumas se hicieron directamente en el main porque con funciones se mostró menos eficiente

    REAL sumk1 = 0.0;
    
    for(int k = 1; k<= 1000000; k++){

       sumk1 += 1.0 / k;  // Solo añade el último sumando

       REAL sumk2 = 0.0;

       for(int n = k; n > 0; n--){ // La segunda forma de la suma demora la ejecución pues tiene que iniciar de un punto distinto en cada iteración
        sumk2 += 1.0 / n;
       }

       // Diferencia relativa

       REAL Rel_Dif = std::fabs(1 - sumk1 / sumk2);

       // Imprime los valores de la tabla
       std::cout << k << " " << sumk1 << " " << sumk2 << " " << Rel_Dif << "\n";
    }
    return 0;
}