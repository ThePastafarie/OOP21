/*
 * Grundlagen der objektorientierten Programmierung
 * Bergische Universitaet Wuppertal
 * Vorlage Blatt 2
 */
/*
*Peter Weber          1936796
*Jonas Lützenkirchen  2023550
*
*Gruppe: Mo16
*Uebungsblatt: 2 Aufgabe: 3_a
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
  matrix = new double*[dim];
  for(int i=0 ; i<dim ; i++) {
    matrix[i] = new double [dim];
  }

  //Mit Zufallswerten fuellen
  srand(time(NULL));
  for(int i=0 ; i<dim ; i++) 
    for(int j=0 ; j<dim ; j++) 
      matrix[i][j] = (int)rand() % 89 + 10; //random zahlen zwichen 10 und 99, weil netter zum anschauen!!

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