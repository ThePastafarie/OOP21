/*
*Peter Weber          1936796
*Jonas Lützenkirchen  2023550
*
*Gruppe: Mo16
*Uebungsblatt: 5 Aufgabe: 11
*/


//a
template<typename T>
T f(const T& a, const T& b) {
return a+b;
}

template<typename T>
bool f(const bool a, const bool b){
    return a&&b;
}

//b
template<typename T>
T prod(T a, T b) {
    return a*b;
}

//die folgenden aufrufe verursachen keine feheler.
prod('x', 'y');
prod<int>('x', 2);
prod((int)'x', 2);   