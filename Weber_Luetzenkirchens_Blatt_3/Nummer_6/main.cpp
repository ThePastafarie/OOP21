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
    double xstart,xend,step;
    int sig;
    int x1 = 10;
    int x2 = 10;
    int x3 = 10;
    int x4 = 10;

    cout << "Bitte Startwert für x angeben: ";cin >> xstart;
    cout << "Bitte Endwert für x angeben: ";cin >> xend;
    cout << "Bitte Schrittweite für x angeben: ";cin >> step;
    cout << "Wieviele signifikanten Ziffer sollen dargestellt werden: ";cin >> sig; 

    cout << setprecision(sig) << scientific << left << showpos;

    if(xend < xstart){
        double temp;
        temp = xstart;
        xstart = xend;
        xend = temp;
    }else if(step < 0){
        step *= -1;
    }else if(step = 0){
        cout << "Ha...Ha...Ha... Du Motherf*****" << endl;
        return 0;
    }
    
    cout << setw(x1) << "x" << "|";
    cout << setw(x2) << "x^3" << " ";
    cout << setw(x3) << "sin(x)" << " ";
    cout << setw(x4) << "log(x)" << endl;
    cout << setfill('=') << setw(x1+x2+x3+x4) << "====" << endl << setfill(' ');

    for(double i = xstart; i < xend; i -= step){

    }
}