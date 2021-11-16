/*
*Peter Weber          1936796
*Jonas Lützenkirchen  2023550
*
*Gruppe: Mo16
*Uebungsblatt: 5 Aufgabe: 12
*/

#include <iostream>

using namespace std;

class Employee{
    private:
        string name, fname, abteil, pernum;
        int age;
    public:
        void eingabe(){
            cout << "Personalnummer: "; cin >> pernum;
            cout << "Bitte Nachname dann Name eingeben:\n";
            cin >> fname;
            cin >> name;
            cout << "Alter des Mitarbeiters? "; cin >> age;
            cout << "Abteilung?\n";
            cin >> abteil;
            cout << "\n\n";
        }

        void ausgabe(){
            cout << pernum << ", " << name << " " << fname << endl;
            cout << "Alter: " << age << " Jahre" << endl;
            cout << "Abteilung: " << abteil << endl;
        }
};

int main(){
    Employee mit1;
    mit1.eingabe();
    mit1.ausgabe();
}