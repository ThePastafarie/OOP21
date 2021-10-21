/*
*Peter Weber  1936796
*
*Gruppe: Do12
*Uebungsblatt: 1 Aufgabe: 1_a_2
*/

#include <iostream>

int main(){
    int OneOne(1);

    std::cout << "Give number to show mutiplikation table!\n ";
    do{
        std::cin >> OneOne;
    }while(OneOne < 1 || OneOne > 10);

    for (int y = 1; y = OneOne; y++)
    {
        for(int x = 1; x = OneOne; x++){
            
            std::cout << y*x << " ";
        }
        std::cout << std::endl;
    }
    
    
}