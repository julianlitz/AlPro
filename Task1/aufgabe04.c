#include "magie.h"

// Die Magie stellt euch folgende Funktionen zur Verfügung:
//
// drucke_text("HIER KOMMT TEXT HIN")
// drucke_ganzzahl(HIER KOMMT EINE GANNZZAHL EXPRESSION HIN)
// drucke_kommazahl(HIER KOMMT EINE KOMMAZAHL EXPRESSION HIN)
// lies_ganzzahl() gibt euch eine Ganzzahl
// lies_kommazahl() gibt euch eine Kommazahl

// Aufgabe:
// Das Programm soll eine Ganzzahl x einlesen.
// Wenn die Zahl 0 oder negativ ist, soll das Programm 0 ausdrucken.
// Sonst soll das Programm die Anzahl aller Primzahlen ausdrucken
// durch die x teilbar ist. Z.B.
//
//               x | 1| 2| 3| 4| 5| 6| 7| 8| 9|10|
// ----------------+--+--+--+--+--+--+--+--+--+--+
//  Anz Primteiler | 0| 1| 1| 2| 1| 2| 1| 3| 2| 2|
//

int number_of_primfactors(int x){
    int n = 2;
    int count = 0;
    if(x<=1){
        return 0;
    }
	while(n<=x){
		if(x%n == 0){
            while (x%n == 0){
                x = x/n;
            }
            count += 1;
        }
		n+=1;
    }
    return count;
}



int main(){

    // int x = lies_ganzzahl();
    // drucke_ganzzahl( number_of_primfactors(x) );

    for (int i = 0; i < 1000; i++)
    {
        printf("%d : %d %d\n", i, number_of_primfactors(i));
    }
    

    
    
    

    
    
        

    return 0;
}
