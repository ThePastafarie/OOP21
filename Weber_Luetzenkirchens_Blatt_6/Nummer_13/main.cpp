/*
*Peter Weber          1936796
*Jonas Lützenkirchen  2023550
*
*Gruppe: Mo16
*Uebungsblatt: 5 Aufgabe: 11
*/
#include <iostream>
#include <algorithm>

using namespace std;

class Interval {
    private:
        int inf, sup;
    public:
        Interval(const int,const int);
        Interval();

        int getInf() const;
        int getSup() const;

        friend Interval operator+(const Interval&, const Interval&);
        Interval& operator+=(const Interval&);

        friend std::ostream& operator<<(std::ostream&, const Interval&);
        friend std::istream& operator>>(std::istream&, const Interval&);
};


Interval operator*(const Interval&, const Interval&);

Interval operator+(const Interval& a, const Interval& b){
    return Interval{a.inf + b.inf, a.sup + b.sup};
}

Interval& Interval::operator+=(const Interval& a){
    sup += a.sup;
    inf += a.inf;
    return (*this);
}

ostream& operator<<(ostream& os, const Interval& a){
    os << "[" << a.inf << "," << a.sup << "]";
    return os;
}
istream& operator>>(istream& is, Interval& a){
    char c{'a'}; //nicht '['
    int inf{0}, sup{0};
    /* Im folgendem gehen wir von den perfekte Eingabe aus - nicht von Falscher Eingabe. */
    is >> c; //erstes '['
    is >> inf >> c;
    is >> sup >> c;
    a = Interval{inf,sup};
    return is;
}

Interval::Interval(const int inff, const int supp) : inf{inff}, sup{supp}{
    if(supp < inff)
    {
        inf = supp;
        sup = inff;
    }
}

Interval::Interval() : Interval{0,0} {}

int Interval::getInf() const { return inf; }
int Interval::getSup() const { return sup; }

Interval operator*(const Interval& x, const Interval& y){
    int a = x.getInf();
    int b = x.getSup();
    int c = y.getInf();
    int d = y.getSup();
    return Interval{min({a*c, a*d, b*c, b*d}), max({a*c, a*d, b*c, b*d})};
}



int main(){
    Interval a, b{2, 1};
    cout << "a: " << a <<  " | b: " << b << endl;

    cout << "a eingeben: ";
    cin >> a;

    Interval c{a+b};
    cout << "c = a+b: " << c << endl;

    Interval d{a*b};
    cout << "d = a*b: " << d << endl;

    c += d;
    cout << "c += d: " << c << endl;

    cout << "inf von c: " << c.getInf() << endl;
    cout << "sup von c: " << c.getSup() << endl;
}