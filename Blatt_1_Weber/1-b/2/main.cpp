/*
*Peter Weber  1936796
*
*Gruppe: Mo16
*Uebungsblatt: 1 Aufgabe: 1_b_2
*/

#include<bits/stdc++.h>
using namespace std;

// Funktion für kommazahlen von Dec nach Bin 
// k-precision nach komma stellen
string preK(string binary,int Integral){
    int rem = Integral % 2;

	// Append 0 in binary
	binary.push_back(rem + '0');

	Integral /= 2;

    if (Integral == 0){return binary;}
    preK(binary,Integral);
    return 0;
}

string decToBin(double num, int k_prec=0){
	string binary = "";

	int Integral = num;
	double fractional = num - Integral;

	/*while (Integral)
	{
		int rem = Integral % 2;

		// Append 0 in binary
		binary.push_back(rem + '0');

		Integral /= 2;
	}
    */
   binary = preK(binary,Integral);

	reverse(binary.begin(),binary.end());

    if(fractional != 0){

        cout << ("Wie hoch soll die nachkomma prätzision sein?: ");
        cin >> k_prec;

        binary.push_back('.');

	    while (k_prec--){
		    // Find next bit in fraction
		    fractional *= 2;
		    int fract_bit = fractional;

	    	if (fract_bit == 1){
		    	fractional -= fract_bit;
			    binary.push_back(1 + '0');
	    	}else
			    binary.push_back(0 + '0');
	    }

    }

	
	return binary;
}

// Driver code
int main()
{

	double n (0);

    cout << ("Bitte geben sie eine Dec. Zahl ein die in Bin. Konvertiert werden Soll: ");
    cin >> n;
    
	cout << decToBin(n) << "\n";
	return 0;
}
