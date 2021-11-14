/*
 * Grundlagen der objektorientierten Programmierung
 * Bergische Universitaet Wuppertal
 * Vorlage Blatt 4
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


int dot(int *x, int *y, int n) {
  int res = 0;
  for(int i=0 ; i<n ; i++)
    res += x[i]*y[i];
  return res;
} 

float dot(float *x, float *y, int n) {
  float res = 0;
  for(int i=0 ; i<n ; i++)
    res += x[i]*y[i];
  return res;
} 

double dot(double *x, double *y, int n) {
  double res = 0;
  for(int i=0 ; i<n ; i++)
    res += x[i]*y[i];
  return res;
} 

int main() {
  //Vektoren
  int *xi, *yi;
  float *xf, *yf;
  double *xd, *yd;
  bool *xb, *yb;

  //Matrizen
  int **I;
  float **F;
  double **D1;
  double **D2;

  //Teilaufgabe a)
  /*
  //Vektoren und Matrizen mit Werten fuellen  
  for(int i=0 ; i<n ; i++) {
    xi[i] = i+1;    yi[i] = i-1;
    xf[i] = 0.1f*i; yf[i] = 0.25f*i;
    xd[i] = M_PI*i; yd[i] = 1e-10*i;
    xb[i] = (i%2 == 0); yb[i] = (i%3 == 0);

    for(int j=0 ; j<n ; j++) {
      if(i==j) I[i][j] = 1; else I[i][j] = 0;
      if(i>j)  F[i][j] = 0.2*i; else F[i][j] = 0.2*j;
      D1[i][j] = M_PI*(i+j);
    }

  }

  cout << setprecision(2);

  cout << "Skalarprodukt von int Vektoren: "    << dot(xi,yi,n) << endl;
  cout << "Skalarprodukt von float Vektoren: "  << dot(xf,yf,n) << endl;
  cout << "Skalarprodukt von double Vektoren: " << dot(xd,yd,n) << endl;
  */


  //Teilaufgabe b)
  //cout << "Skalarprodukt von bool Vektoren: "   << dot(xb,yb,n) << endl << endl;


  //Teilaufgabe c)
  /*
  matvec(D1,xf,xd,n);
  cout << "Matrix-Vektor-Produkt mit double und float: " << endl;
  out(xd,n);
  matvec(F,xi,xf,n);
  cout << "Matrix-Vektor-Produkt mit float und int: " << endl;
  out(xf,n);
  */


  //Teilaufgabe d)
  /*
  matmat(D1,I,D2,n);
  cout << "Matrix-Matrix-Produkt mit double und int: " << endl;
  out(D2,n);
  matmat(D1,F,D2,n);
  cout << "Matrix-Matrix-Produkt mit double und float: " << endl;
  out(D2,n);
  */

  return 0;
}