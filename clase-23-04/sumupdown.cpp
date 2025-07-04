#include <iostream>
#include <cmath>

#include "functions.h"

typedef float REAL; 


int main(int argc, char **argv)
{
  std::cout.precision(6); std::cout.setf(std::ios::scientific);
  for (int ii = 1; ii <= 10000; ++ii) {
    REAL sum1 = sumup(ii);
    REAL sum2 = sumdown(ii);
    std::cout << ii << "\t" << sum1 << "\t" << sum2
              << "\t" << std::fabs(sum1-sum2)/sum2 << "\n";
  }

  return 0;
}