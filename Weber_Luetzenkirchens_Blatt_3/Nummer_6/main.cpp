/*
*Peter Weber          1936796
*Jonas Lützenkirchen  2023550
*
*Gruppe: Mo16
*Uebungsblatt: 3 Aufgabe: 6_
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    double start,end,step;
    int sig;

    cout << "Bitte Startwert für x angeben: ";cin >> start;
    cout << "Bitte Endwert für x angeben: ";cin >> end;
    cout << "Bitte Schrittweite für x angeben: ";cin >> step;
    cout << "Wieviele signifikanten Ziffer sollen dargestellt werden: ";cin >> sig; 
    
    int x = 8+sig;
    int x1 = 8+2;
    cout << scientific << left << showpos;

    if(end < start){
        double temp;
        temp = start;
        start = end;
        end = temp;
    }else if(step < 0){
        step *= -1;
    }else if(step == 0){
        cout << "Ha...Ha...Ha... Du Motherf*****" << endl;
        return 0;
    }
    
    cout << setw(x) << "x" << "|";
    cout << setw(x) << "x^3" << " ";
    cout << setw(x) << "sin(x)" << " ";
    cout << setw(x) << "log(x)" << endl;
    cout << setfill('=') << setw(x+3*x) << "======" << endl << setfill(' ');

    for(double i = start; i < end; i += step){
        cout << setprecision(2) << setw(x1) << i << "|";
        cout << setprecision(sig) << setw(x) << pow(i,3) << " ";
        cout << setw(x) << sin(i) << " ";
        if(i <= 0){
            cout << setw(x) << "/" << endl;
        }else{
            cout << setw(x) << log(i) << endl;
        }
    }
}