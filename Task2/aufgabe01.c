#include <stdio.h>
#include <stdlib.h>

//Wir berechnen Sinus und Cosinus mit der Taylorreihe bei 0.
//Um zu vermeiden durch große integer zu teilen, 
//die durch die Fakultäten entstehen verwenden wir das Ergebnis "partials" aus der vorherigen Iteration

double sin(double x){
  double summe=0;
  double partials=x;
  for(int k=0; k<10e3; k++){
    summe=partials+summe;
    partials=((-1)*(x*x))/((2*k+2)*(2*k+3))*(partials);
    }
  return summe;
}

double cos(double x){
  double summe=0;
  double partials=1;
  for(int k=0; k<10e3; k++){
    summe=partials+summe;
    partials=((-1)*(x*x))/((2*k+2)*(2*k+1))*(partials);
    }
  return summe;
}

int main() {
  char buf[0x30];
  double x = atof(fgets(buf, 0x30, stdin));
  //%0.4f Formatiert eine Floatingpoint Number auf 4 Stellen nach dem Komma
  printf("sin(x) = %0.4f, cos(x) = %0.4f\n", sin(x), cos(x));
  return 0;
}

