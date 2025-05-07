#include <random>
#include <iostream>
#include <cstdlib>

typedef float REAL; 

double compute_pi(int seed, long nsamples);

int main(int argc, char **argv) 
{
  const int SEED = std::atoi(argv[1]);
  const long NSAMPLES = std::atol(argv[2]);
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  double mypi = compute_pi(SEED, NSAMPLES);
  std::cout << mypi << "\n"; 
    
  return 0;
}

double compute_pi(int seed, long nsamples) 
{
  std::mt19937 gen(seed);
  std::uniform_real_distribution<double> dis{0.0, 0.5};
  REAL ndentro = 0.0;
  for (int ii = 1; ii <= nsamples; ++ii){
    REAL x = dis(gen);
    REAL y = dis(gen);
    if (x*x + y*y <= 0.25){
        ndentro+=1;
    }
  }
  REAL pi = ndentro * 4.0 /nsamples;
  return pi;
}