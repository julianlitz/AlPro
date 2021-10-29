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
//   x/3 falls x durch 3 teilbar ist
//    42 falls der Rest von x/3 gleich 1 ist
//     0 sonst


int main(){
    int n = lies_ganzzahl();
    
    switch(n%3){
        case 0: drucke_ganzzahl(n/3); break;
        case 1: drucke_ganzzahl(42); break;
        case 2: drucke_ganzzahl(0); break;
    }

    return 0;
}
