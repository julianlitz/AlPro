#include <stdio.h>

#include "mein_modul.h"

// Compile with:
// clang -std=c17 -Wall -Wextra -Wpedantic -g -o loesung aufgaben.c mein_modul.c


// Aufgabe:
// Implementieren und testen Sie die Funktion
// die in mein_modul.h beschrieben werden.
// Die dort beschrieben Funktionen sollen in
// mein_modul.c Implementiert werden.

int main() {
  printf("%d\n", zufaellige_zahl());

  char text1[] = "Hier könnte ein Kommentar stehen";
  char text2[] = "Komsich\0was hier so passiert";

  printf("%d\n", meine_strlen(text1));
  printf("%d\n", meine_strlen(text2));


  int length = 4;
  int my_array[length];
  int_array_befuellen(my_array,length);

  printf("Array unsortiert:\n");
  int_array_ausrucken(my_array,length);

  int num_swaps = kisten_sortieren(my_array,length);

  printf("Array sortiert:\n");
  int_array_ausrucken(my_array,length);
  printf("Wir haben %d Vertauschungen benötigt um das Array zu sortieren.\n", num_swaps);
  return 0;
}
