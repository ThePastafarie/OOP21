/*
 * Grundlagen der objektorientierten Programmierung
 * Bergische Universitaet Wuppertal
 * Vorlage Blatt 3
 */

#include <iostream>

using namespace std;

void swap(int num[], int i, int j) {
	int tmp = num[j];
	num[j]  = num[i];
	num[i]  = tmp;
}

void sort1(int num[], int start, int end) {
	bool finished = false;

	while(!finished) {
		finished = true;
		for(int i=start ; i<end ; i++) {
			if(num[i] > num[i+1]) {
				swap(num, i, i+1);
				finished = false;
			}
		}
	}
}

void sort2(int num[], int start, int end) {
	int min;

	do {
	    min = start;
		for(int i=start+1; i<=end; i++) {
			if(num[i] < num[min])
				min = i;
		}
		swap(num, min, start);
		start++;
	}while(start < end);
}

void sum(int num1[], int num2[], int length, long int& erg) {
	erg = 0.0;

	for(int i=0 ; i<length ; i++)
		erg += num1[i] + num2[i];
}

void prod(int num1[], int num2[], int length, long int& erg) {
	erg = num1[0] * num1[length/2] * num1[length-1];
	erg += num2[0] * num2[length/2] * num2[length-1];
}

void out(int num[], int start, int end) {
	int i;
	for(i=start ; i<=end ; i++)
		cout << num[i] << " ";
    cout << endl;
}

int main() {
    int const MAXLENGTH =50000;
	int i;
	int length;
	long int summe;
	long int erg;

	cout << "Anzahl der Elemente: ";
	cin >> length;

	if(length<=0 || length>MAXLENGTH) {
		cout << "Fehler, Anzahl muss zwischen 1 und" << MAXLENGTH << "liegen!" << endl;
		return 1;
	}

    int numbers1[length]={0};
	int numbers2[length]={0};

	// Mit Zufallszahlen zwischen 1 und length fuellen
	srand(time(NULL));
	for(i=0 ; i<length ; i++) {
		numbers1[i] = rand() % length + 1;
		numbers2[i] = rand() % length + 1;
	}

	summe = 0;
	for(i=0 ; i<length ; i++)
		summe += numbers1[i];

	printf("\n");

	cout << "Array 1 vor dem Sortieren: " << endl;
	out(numbers1,0,length-1);
	cout << "Array 2 vor dem Sortieren: " << endl;
	out(numbers2,0,length-1);

	cout << "Der Mittelwert von Array 1 hat den Wert " << (double)summe/length << "." << endl;
	printf("\n");

	cout << "Sortiere Array 1 mit " << length << " Elementen mit Algorithmus 1..." << endl;
	sort1(numbers1,0,length-1);

	cout << "Sortiere Array 2 mit " << length << " Elementen mit Algorithmus 2..." << endl;
	sort2(numbers2,0,length-1);
	cout << endl;

	cout << "Array 1 nach dem Sortieren: " << endl;
	out(numbers1,0,length-1);
	cout << "Array 2 nach dem Sortieren: " << endl;
	out(numbers2,0,length-1);
	cout << endl;

	sum(numbers1, numbers2, length, erg);
	cout << "Ergebnis von sum: " << erg << endl;

	prod(numbers1, numbers2, length, erg);
	cout << "Ergebnis von prod: " << erg << endl;

	cout << endl; //Warum??

	return 0;
}