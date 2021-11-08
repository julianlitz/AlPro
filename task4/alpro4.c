#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <assert.h>

#include "alpro4.h"

int* int_array_erstellen(const int anzahl_elemente){
    srand(time(NULL));
    assert(anzahl_elemente >= 0);

    int* array = (int*) calloc(anzahl_elemente, sizeof(int));

    for (int i = 0; i < anzahl_elemente; i++) {
        array[i] = rand() % 100;
    }
    return array;
}

void int_array_ausrucken(int* array, int laenge) {
  printf("[ ");
  for (int i = 0; i < laenge; i++) {
    printf("%4d, ",array[i]);
  }
  printf("]\n");
  return;
}

int kisten_vergleichs_funktion(const void* p1, const void* p2) {
    int x1 = *((int*)p1); 
    int x2 = *((int*)p2); 
    if (x1 > x2) { return -1; } 
    else if (x1 < x2) { return 1; } 
    else { return 0; }
}

void kisten_sortieren(void* array_von_kisten, int groesse_einer_kiste_in_bytes,
                      int anzahl_kisten ,int (*kisten_vergleichs_funktion)(const void *, const void *)){
    int max_idx;  
    for (int i = 0; i < anzahl_kisten - 1; i++) {
        max_idx = i;
        for (int j = i+1; j < anzahl_kisten; j++) {
            void* p1 = (char*)array_von_kisten + max_idx * groesse_einer_kiste_in_bytes;
            void* p2 = (char*)array_von_kisten + j * groesse_einer_kiste_in_bytes;

            if(kisten_vergleichs_funktion(p1,p2) > 0) {
                max_idx = j;
            }
        }
        void* v1 = (char*)array_von_kisten + max_idx * groesse_einer_kiste_in_bytes;
        void* v2 = (char*)array_von_kisten + i * groesse_einer_kiste_in_bytes;

        char temp[groesse_einer_kiste_in_bytes];
        memcpy(temp, v1, groesse_einer_kiste_in_bytes);
        memcpy(v1, v2, groesse_einer_kiste_in_bytes);
        memcpy(v2, temp, groesse_einer_kiste_in_bytes);
    }
}

int main() {

    const int num = 15;
    int* my_array = int_array_erstellen(num);

    int_array_ausrucken(my_array, num);

    //qsort(my_array, num, sizeof(int), &kisten_vergleichs_funktion);
    kisten_sortieren(my_array, sizeof(int), num, &kisten_vergleichs_funktion);

    int_array_ausrucken(my_array, num);

    free(my_array);
    return 0;
}