/*
*Peter Weber          1936796
*Jonas Lützenkirchen  2023550
*
*Gruppe: Mo16
*Uebungsblatt: 3 Aufgabe: 7_a/b
*/

#include <iostream>
#include <iomanip>


namespace sortieren{
    void sort(int x[],int length){
        std::cout << std::left << std::setw(9) << "Original" << ": ";
        for (int i = 0; i < length; ++i) 
            std::cout << x[i] << " " ;
        std::cout << std::endl;
        
        for(int i = 0; i < length; i++){
            for(int j = i; j<length; j++){
                if(x[i] > x[j]){
                    std::swap(x[i],x[j]);
                }
            }
        }
        std::cout << std::setw(9) << "Sorted" << ": ";
        for (int i = 0; i < length; ++i) 
            std::cout << x[i] << " " ;
        std::cout << std::endl << std::endl;
    }
    //----------------------------------------------------------------
    void sort(double x[],int length){
        std::cout << std::left << std::setw(9) << "Original" << ": ";
        for (int i = 0; i < length; ++i) 
            std::cout << x[i] << " " ;
        std::cout << std::endl;
        
        for(int i = 0; i < length; i++){
            for(int j = i; j<length; j++){
                if(x[i] > x[j]){
                    std::swap(x[i],x[j]);
                }
            }
        }
        std::cout << std::setw(9) << "Sorted" << ": ";
        for (int i = 0; i < length; ++i) 
            std::cout << x[i] << " " ;
        std::cout << std::endl << std::endl;
    }
    //----------------------------------------------------------------
    void sort(char x[],int length){
        std::cout << std::left << std::setw(9) << "Original" << ": ";
        for(int i = 0; i < length; i++)
            std::cout << x[i] << " " ;
        std::cout << std::endl;
        
        for(int i = 0; i < length; i++){
            for(int j = i; j<length; j++){
                if(x[i] > x[j]){
                    std::swap(x[i],x[j]);
                }
            //std::cout << i << "|" << j << std::endl;
            }
        }
        std::cout << std::setw(9) << "Sorted" << ": ";
        for(int i = 0; i < length; i++)
            std::cout << x[i] << " " ;
        std::cout << std::endl << std::endl;
    }
}


namespace sortieren_und_rechnen{
    void sort(int x[],int length, bool b = false){
        sortieren::sort(x,length);
        if(b == true){
            int sum=0;
            for(int i=0; i < length; i++){
                sum += x[i];
            }
            std::cout << std::setw(9) << "Sum" << ": " << sum << "\n\n\n";
        }
    }
    //----------------------------------------------------------------
    void sort(double x[],int length, bool b = false){
        sortieren::sort(x,length);
        if(b == true){
            int prod=0;
            for(int i=0; i < length; i++){
                prod *= x[i];
            }
            std::cout << std::setw(9) << "Sum" << ": " << prod << "\n\n\n";
        }
    }
    //----------------------------------------------------------------
    void sort(char x[],int length, bool b = false){
        sortieren::sort(x,length);
        if(b == true){
            int sum=0;
            for(int i=0; i < length; i++){
                sum += x[i];
            }
            std::cout << std::setw(9) << "ASCI-Sum" << ": " << sum << "\n\n\n";
        }
    }
}

using namespace sortieren_und_rechnen;

int main(){
    int a[] = {5,2,3,1,4};
    double b[] = {0.4,0.5,0.3,0.2,0.1};
    char c[] = {'x','b','a','r','t'};

    sort(a,5);
    sort(b,5,true);
    sort(c,5,true);

    return 1;
}