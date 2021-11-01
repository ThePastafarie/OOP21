/*
 * Grundlagen der objektorientierten Programmierung
 * Bergische Universitaet Wuppertal
 * Vorlage Blatt 2
 */

#include <cstdlib> 
#include <ctime>
#include <iostream>

using namespace std;

int main() {
    double** matrix;
    int dim;

    cout << "Dimension eingeben: ";
    cin >> dim;

  //Speicher fuer dim x dim  Matrix anfordern
    matrix = new double*[sizeof(double*)*dim];
    for(int i=0 ; i<dim ; i++) {
    matrix[i] = new double [sizeof(double)*dim];
    }

  //Mit Zufallswerten fuellen
    srand(time(NULL));
    for(int i=0 ; i<dim ; i++) 
    for(int j=0 ; j<dim ; j++) 
    matrix[i][j] = (double)rand(); 

  //Ausgeben
    cout << "Erzeugte Matrix: " << endl;
    for(int i=0 ; i<dim ; i++) {
    for(int j=0 ; j<dim ; j++) { 
        cout << matrix[i][j] << " ";
    }
    cout << endl;
    }
  //Speicher wieder freigeben
    for(int i=0 ; i<dim ; i++) {
    delete [] matrix[i];
    }
    delete [] matrix;

    return 0;
}