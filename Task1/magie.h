#pragma once
#include <stdio.h>
#include <stdlib.h>

#define buflen 0x60
/* Wir klammern hier guten Stil aus,
 * damit es in jedem Fall läuft.
 *
void drucke_test(char* text);
void drucke_ganzzahl(int x);
void drucke_kommazahl(double x);

int    lies_ganzzahl();
double lies_kommazahl();
*/

/* Das hier ist schlechter Stil und
 * nur dazu da, damit ihr in den ersten 2 Wochen
 * in weniger technische Probleme lauft
 */
void drucke_text(char* text) {
  printf("%s\n", text);
}

void drucke_ganzzahl(int x) {
  printf("%d\n", x);
}

void drucke_kommazahl(double x) {
  printf("%0.4f\n", x);
}

int lies_ganzzahl() {
  char buf[buflen];
  return(atoi(fgets(buf, buflen, stdin)));
}

double lies_kommazahl() {
  char buf[buflen];
  return(atof(fgets(buf, buflen, stdin)));
}
