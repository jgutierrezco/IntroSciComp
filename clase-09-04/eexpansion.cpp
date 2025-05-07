#include <iostream>
#include <cmath>

typedef float REAL;

int factorial(int n);
REAL fnaive(REAL x, int N);
REAL fsmart(REAL x, int N);

int main(void)
{
  std::cout.precision(16); std::cout.setf(std::ios::scientific);
  REAL x = 1.234534534;
  const REAL exact = std::exp(-x);
  for (int NMAX = 0; NMAX <= 100; ++NMAX) {
    std::cout << NMAX
              << "\t" << fnaive(x, NMAX)
              << "\t" << std::fabs(fnaive(x, NMAX) - exact)/exact
              << "\t" << fsmart(x, NMAX)
              << "\t" << std::fabs(fsmart(x, NMAX) - exact)/exact
              << std::endl;
  }
  return 0;
}

REAL fnaive(REAL x, int N)
{
    REAL term = 0, suma = 0;
    for(int k = 0; k <= N; ++k){
        term = std::pow(-x, k)/factorial(k);
        suma += term;
    }
  return suma;  
}

int factorial(int n)
{
  if (n <= 0) return 1;
  return n*factorial(n-1);
}

/*
term(k)= std::pow(-x, k)/factorial(k);
term(k+1)= std::pow(-x, k+1)/factorial(k+1) = (-x)*std::pow(-x,k)/((k+1)*factorial(k));
term(k+1) = (-x/(k+1)) * std::pow(-x,k)/factorial(k)
*/


// Evitando las operaciones entre números que crecen rápidamente
REAL fsmart(REAL x, int N)
{
    for(k=0; k<=N; ++k)
}