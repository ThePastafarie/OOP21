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
    double start(0);
    double end(0);
    double step(0);
    int sig;

    cout << "Bitte Startwert für x angeben: ";cin >> start;
    cout << "Bitte Endwert für x angeben: ";cin >> end;
    cout << "Bitte Schrittweite für x angeben: ";cin >> step;
    cout << "Wieviele signifikanten Ziffer sollen dargestellt werden: ";cin >> sig; 

    int x1 = 8+sig;
    int x2 = 8+sig;
    cout << setprecision(sig) << scientific << left << showpos;

    if(end < start){
        double temp;
        temp = start;
        start = end;
        end = temp;
    }else if(step < 0){
        step *= -1;
    }else if(step = 0){
        cout << "Ha...Ha...Ha... Du Motherf*****" << endl;
        return 0;
    }
    
    cout << setw(x1) << "x" << "|";
    cout << setw(x2) << "x^3" << " ";
    cout << setw(x2) << "sin(x)" << " ";
    cout << setw(x2) << "log(x)" << endl;
    cout << setfill('=') << setw(x1+3*x2)<< "======" << endl << setfill(' ');
    //int c (0);
    for(double i = start; i < end; i ++){
        cout << setw(x1) << i << "|";
        cout << setw(x2) << pow(i,3) << " ";
        cout << setw(x2) << sin(i) << " ";
        if(i <= 0){
            cout << setw(x2) << "/" << endl;
        }else{
            cout << setw(x2) << log(i) << endl;
        }
        //c++;
        //cout << c << endl;
    }
}