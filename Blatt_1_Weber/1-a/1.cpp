/*
*Peter Weber  1936796
*
*Gruppe: Do12
*Uebungsblatt: 6 Aufgabe: 1
*/

#include <iostream>

int main(){

    int counter = 0;
    double allNumSum = 0;
    double Num;

    while(Num != 0) {
        counter++;

        std::cout << "please bro give number| 0 to exit";
        std::cin >> Num;

        allNumSum = allNumSum + Num;
    }

    std::cout << "the average of your numbers is: " << allNumSum/counter;
}