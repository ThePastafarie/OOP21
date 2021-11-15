/*
*Peter Weber          1936796
*Jonas Lützenkirchen  2023550
*
*Gruppe: Mo16
*Uebungsblatt: 4 Aufgabe: 8_d
*/

#include "loeser.hpp"

#include <iostream>
#include <iomanip>


using namespace std;


//Ueberschreibt A mit der entsprechenden LU-Zerlegung 
//(ohne Pivotisierung)
int main() {
    double b[n], x[n];
    double A[n][n];

  //Matrix A und rechte Seite mit Werten fuellen
    for(int i=0 ; i<n ; i++) {
        b[i] = 1.0;
    for(int j=0 ; j<n ; j++)
        if(i>j) A[i][j] = i+1; else A[i][j] = j+1;
    }

    lu(A);

    solve(A,b,x);

    cout << setprecision(10) << endl;
    cout << "Loesungsvektor:" << endl;
    for(int i=0 ; i<n ; i++)
        cout << x[i] << endl;
    cout << endl;

    return 0;
}