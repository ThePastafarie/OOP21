/*
 * Grundlagen der objektorientierten Programmierung
 * Bergische Universitaet Wuppertal
 * Vorlage Blatt 4
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


template <typename T> T dot(T *x, T *y, int n) {
    T res = 0;
    for(int i=0 ; i<n ; i++)
    res += x[i]*y[i];
    return res;
} 

template<>
bool dot<bool>(bool *x, bool *y, int n) {
    bool temp = true;
    for(int i = 0; i < n && temp; i++)
        temp = (x[i] == y[i]);
    return temp;
}

template <typename S, typename T> void matvec(S **A, T *x, S *y, int n) {
    for(int i = 0; i < n; i++){
        y[i] = 0;
        for(int j = 0; j < n; j++)
            y[i] += A[j][i] * x[j];
    }
}

template <typename S, typename T> void matmat(S **A, T **B, S **C, int n) {
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            C[j][i] = 0;

            for(int k = 0; k < n; k++)
                C[j][i] += A[k][i] * B[j][k];
        }
    }
}

template <typename T> void out(T *x, int n) {
    for(int i = 0; i < n; i++){
        cout << x[i] << endl;
    }
    cout << endl;
}

template <typename T> void out(T **A, int n) {
    cout << right;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            cout << setw(5) << A[j][i];
        cout << endl;
    }
    cout << left << endl;
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

  //Eingabe n
  int n;
  cout << "Dimension eingeben: ";
  cin >> n;
  cout << endl;

  if(n <= 0){
    cout << "Dimension muss größer als null sein!!";
    return 1;
  }

  //Speicher reservieren
  xi = new int[n];
  yi = new int[n];
  xf = new float[n];
  yf = new float[n];
  xd = new double[n];
  yd = new double[n];
  xb = new bool[n];
  yb = new bool[n];

  I = new int*[n];
  F = new float*[n];
  D1 = new double*[n];
  D2 = new double*[n];
  for(int i = 0; i < n; i++) {
    I[i] = new int[n];
    F[i] = new float[n];
    D1[i] = new double[n];
    D2[i] = new double[n];
  }

  //Teilaufgabe a)
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

  cout << "Skalarprodukt von bool Vektoren: "   << dot(xb,yb,n) << endl << endl;


  //Teilaufgabe c)
  matvec(D1,xf,xd,n);
  cout << "Matrix-Vektor-Produkt mit double und float: " << endl;
  out(xd,n);
  matvec(F,xi,xf,n);
  cout << "Matrix-Vektor-Produkt mit float und int: " << endl;
  out(xf,n);


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