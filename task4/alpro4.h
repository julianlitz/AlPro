#ifndef ALPRO4_H_
#define ALPRO4_H_

int* int_array_erstellen(const int anzahl_elemente);
void int_array_ausrucken(int* array, int laenge);
int kisten_vergleichs_funktion(const void* p1, const void* p2);
void kisten_sortieren(void* array_von_kisten, int groesse_einer_kiste_in_bytes,
                      int anzahl_kisten ,int (*kisten_vergleichs_funktion)(const void *, const void *));

#endif