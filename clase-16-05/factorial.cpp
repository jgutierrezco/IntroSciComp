#include "factorial.h"

long factorial(long number)
{
    if(number == 0) return 1;
    if(number < 0){
        std::cerr << "Negative numbers not allowed. Returning:" << "\n";
        return -1;
    }
    return number <= 1 ? number : factorial(number-1)*number;
}

bool es_par(int n)
{
    if(n%2==0){
        return true;
    }
    return false;
}