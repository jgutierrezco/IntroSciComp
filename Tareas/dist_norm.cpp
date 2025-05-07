#include <random>
#include <iostream>
#include <cstdlib>
#include <vector>
#include <math.h>

void compute_pdf(int seed, int nsamples, double mu, double sigma, double xmin, double xmax, int nbins);

int main(int argc, char **argv)
{
  const int SEED = std::stod(argv[1]);
  const int NSAMPLES = std::stod(argv[2]);
  const double MU = std::stod(argv[3]);
  const double SIGMA = std::stod(argv[4]);
  const double XMIN = std::stod(argv[5]);
  const double XMAX = std::stod(argv[6]);
  const int NBINS = std::stod(argv[7]);

  compute_pdf(SEED, NSAMPLES, MU, SIGMA, XMIN, XMAX, NBINS);
}

void compute_pdf(int seed, int nsamples, double mu, double sigma, double xmin, double xmax, int nbins)
{
  // random stuff
  std::mt19937 gen(seed);
  std::normal_distribution<double> dis{mu, sigma};
  // TODO: histogram stuff
  
  std::vector<int> histograma(nbins, 0); // Inicializa el vector con ceros
  float bin_w = (xmax-xmin)/nbins; // Ancho de cada bin


  for(int n = 0; n < nsamples; ++n) {
    double x = dis(gen);
    // TODO: fill here the counting histogram stuff
    if (x<xmax && xmin<=x){
        // Encuentra el valor entero para el bin en que está el dato.
        int bin = static_cast<int>((x-xmin)/bin_w);
        histograma[bin]++; // Cuenta para cada bin
        
    }


  }
  // TODO: compute and print the pdf
  for(int ii = 0; ii < nbins; ++ii){
    double x_aprox = xmin + (ii+0.5)*bin_w; // Da el centro del bin
    double pdf = histograma[ii] / (nsamples*bin_w); // Función de Densidad de Probabilidad 
    std::cout << x_aprox << " " << pdf << "\n"; 
  }

}