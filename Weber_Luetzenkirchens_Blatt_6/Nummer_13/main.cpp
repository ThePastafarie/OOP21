/*
*Peter Weber          1936796
*Jonas Lützenkirchen  2023550
*
*Gruppe: Mo16
*Uebungsblatt: 5 Aufgabe: 11
*/

#include <iostream>

using namespace std;

class Tnterval{
    private:
        double inf;
        double sup;

    public:
        Interval(){inf = 0; sup = 0;}
        Interval(double x, double Y){
            if(x < y){
                inf=x;
                sup=y;
            }else{
                inf=y;
                sup=x;
            }
        }

};