/*
*Peter Weber  1936796
*
*Gruppe: Mo16
*Uebungsblatt: 1 Aufgabe: 1_a_2
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int OneOne(1);

    cout << "Give number to show mutiplikation table!   ";
    do{
        cin >> OneOne;
    }while(OneOne < 1 || OneOne > 10);

    for (int y = 1; y <= OneOne; y++)
    {
        for(int x = 1; x <= OneOne; x++){
            
            cout << setw(2) << y << "*" << setw(2) << x << " = " << setw(2) << y*x << "    ";
        }
        cout << endl;
    }
    
    
}