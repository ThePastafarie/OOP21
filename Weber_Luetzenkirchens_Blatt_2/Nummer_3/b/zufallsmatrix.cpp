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
*Uebungsblatt: 2 Aufgabe: 3_b
*/

#include <cstdlib> 
#include <ctime>
#include <iostream>

using namespace std;

int main() {
    double*** matrix;
    int dim;
    int n;

    cout << "Dimension eingeben: ";cin >> dim;
    cout << "wie viel Matritzen:"; cin >> n;

  //Speicher fuer dim x dim  Matrix anfordern
    matrix = new double**[n];
    for(int i(0); i<n; i++){
      matrix[i] = new double*[dim];
      for(int j=0 ; j<dim ; j++) {
        matrix[i][j] = new double [dim];
      }
    }
    

  //Mit Zufallswerten fuellen
    //srand(time(NULL));
    for(int i=0 ; i<n ; i++) 
    for(int j=0 ; j<dim ; j++)
    for(int k=0 ; k<dim ; k++) 
    matrix[i][j][k] = (int)rand() % 89 + 10; //random zahlen zwichen 10 und 99, weil netter zum anschauen!!

  //Ausgeben
    cout << "Erzeugte Matrix: " << endl << endl;
    for(int i=0 ; i<n ; i++) {
      for(int j=0 ; j<dim ; j++) {
        for(int k=0 ; k<dim ; k++){
          cout << matrix[i][j][k] << " ";
        }
        cout << endl;
      }
      for(int i=0; i<dim; i++){
        cout << "---";
      } 
      cout << endl;
    }
  //Speicher wieder freigeben
    for(int i=0 ; i<n ; i++) {
      for(int j=0; j<dim; j++){
        delete [] matrix[i][j];
      }
      delete [] matrix[i];
    }
    delete [] matrix;

    return 0;
}