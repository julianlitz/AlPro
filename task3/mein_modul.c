#include "mein_modul.h"

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

// Gibt Debuginfos aus (bei Bedarf)
void debug(char* text) {
#ifdef DEBUG
  printf("[DEBUG: %s]\n", text);
#endif
}

// Gibt zufällige Ganzzahl zurück.
int zufaellige_zahl() {
  return rand();
}

// Die Funktion liest von der Standardeingabe maximal buffer_len -1 viele Zeichen.
// Das Symbol '\n' wird ebenfalls eingeladen.
void lies_eingabe_und_schreib_sie_hier_rein(char* rein) {
  fgets(rein, buffer_len, stdin);
}

// Diese Funktion wird zur Ladezeit der Bibliothek,
// also zum Start des Prozess, ausgeführt.
void __attribute__((constructor)) init_random_seed() {
  srand(time(NULL));
  debug("Modul ist initalisiert");
}

/*Mein Code*/


//Die char-Variable, die nach dem letzten Buchstaben des Textes
//im Array kommt, erhält den Wert ’\0’. Man bezeichnet dies auch als den
//Nullcharakter und spricht in diesem Zusammenhang von nullterminierten Strings.
//Sobald man bei der Verarbeitung von Strings auf den Nullcharakter trifft, so
//markiert dies das Ende des Strings, selbst wenn das Array mehr Speicherzellen
//enthält.
int meine_strlen(char* text) {
  int length = 0;
  while (*(text++) != '\0'){
    length++;
  }
  return length;
}

void int_array_befuellen(int* array, int laenge) {
  for (int i = 0; i < laenge; i++) {
    array[i] = zufaellige_zahl();
  }
  return;
}

void int_array_ausrucken(int* array, int laenge) {
  printf("[ ");
  for (int i = 0; i < laenge; i++) {
    printf("%4d, ",array[i]);
  }
  printf("]\n");
  return;
}

//Selectionsort (Max-Weight-Sort)
int kisten_sortieren(int* kisten, int anzahl_kisten) {
  int max_idx, temp;
  int num_swaps;
  for (int i = 0; i < anzahl_kisten - 1; i++) {
    max_idx = i;
    for (int j = i+1; j < anzahl_kisten; j++) {
      //Update index if we find a higher number
      if( *(kisten + max_idx) < *(kisten + j) ){
        max_idx = j;
      }
    }
    //Swap entry of index i with entry of index max_idx
    num_swaps++;
    temp = *(kisten+max_idx);
    *(kisten+max_idx) = * (kisten + i);
    *(kisten+i) = temp;
  }
  return num_swaps;
}