/*
*Peter Weber  1936796
*
*Gruppe: Mo16
*Uebungsblatt: 1 Aufgabe: 1_a_3
*/

#include <iostream>

using namespace std;

// Funktion zu spiegeln eines Strings
void reverseStr(string& str) 
{ 
    int n = str.length(); 
  
    //chars werden vertascht
    for (int i = 0; i < n / 2; i++) 
        swap(str[i], str[n - i - 1]); 
} 

//main
int main(){
    int num (0);
    
    //Eingabe
    cout<<"Bitte geben sie eine Natürlichezahl ein: ";cin>>num;


    string str = to_string(num);
    string check = str;
    reverseStr(str); 

    //Ausgabe
    if(check == str){
        cout<<"Ihre Zeichenkette ist ein Palindorm\n";
    }else{
        cout<<"Ihre Zeichenkette ist kein Palindorm\n";
    }
    return 0; 
}