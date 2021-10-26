/*
*Peter Weber  1936796
*
*Gruppe: Mo16
*Uebungsblatt: 1 Aufgabe: 1_a_1
*/

#include <iostream>

int main(){

    int counter = -1;
    double allNumSum = 0;
    double Num;

    std::cout << "please bro give number| 0 to exit \n";
    while(Num != 0) {
        counter++;

        std::cin >> Num;

        allNumSum = allNumSum + Num;
    }

    std::cout << "all together is: " << allNumSum << " divided by " << counter << " is: " << allNumSum/counter << std::endl;
}