/*
*Peter Weber  1936796
*
*Gruppe: Mo16
*Uebungsblatt: 1 Aufgabe: 1_b_1
*/

#include <iostream>

using namespace std;


//funktion prüft auf teilbarkeit und gibt den größten teiler aus
int gteiler(int z1, int z2, int teiler=1, int temp=0){

    //wenn beide teilbar dan merke dir die zahl
    if( (float(z1%teiler)==0) && (float(z2%teiler)==0) ){
        temp=teiler;
    }

    if(teiler >= z1 || teiler >= z1){return temp;}

    return gteiler(z1,z2,teiler+1,temp);
}

//main
int main(){
    int zahl1(0);
    int zahl2(0);

    //Eingabe
    cout<<"Geben sie die erste Zahl an: ";cin>>zahl1;
    cout<<"Geben sie die zweite Zahl an: ";cin>>zahl2;

    //Ausgabe
    cout<<"\nDer gemeinsame Größte teiler ist: "<<(gteiler(zahl1,zahl2))<<"\n";

    return 0;
}

