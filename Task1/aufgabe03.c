#include "magie.h"

// Die Magie stellt euch folgende Funktionen zur Verfügung:
//
// drucke_text("HIER KOMMT TEXT HIN")
// drucke_ganzzahl(HIER KOMMT EINE GANNZZAHL EXPRESSION HIN)
// drucke_kommazahl(HIER KOMMT EINE KOMMAZAHL EXPRESSION HIN)
// lies_ganzzahl() gibt euch eine Ganzzahl
// lies_kommazahl() gibt euch eine Kommazahl

// Aufgabe:
// Das Programm soll eine Ganzzahl x einlesen und folgendes ausdrucken:
// "Ja" falls x eine Primzahl ist. Sonst soll das Programm "Nein" ausdrucken.


int main(){

    int x = lies_ganzzahl();
    int n = 2;

    if(x<=1){
        drucke_text("Nein");
        return 0;
    }
	while(n*n<=x){

		if(x%n == 0){
            drucke_text("Nein");
            return 0;
		}
		else{
			n+=1;
		}
    }
    drucke_text("Ja");
    return 0;
}
