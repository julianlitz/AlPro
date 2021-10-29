#include <stdio.h>
#include <stdlib.h>

//Der Tangens ist über den Sinus und Cosinus definiert und lässt sich somit gut aus aufgabe01 berechnen

double tan(double x){
  double sinus_x=0;
  double cosin_x = 0;
  double partials_sin=x;
  double partials_cos=1;
  for(int k=0; k<10e3; k++){
    sinus_x=partials_sin+sinus_x;
    cosin_x=partials_cos+cosin_x;
    partials_sin=((-1)*(x*x))/((2*k+2)*(2*k+3))*(partials_sin);
    partials_cos=((-1)*(x*x))/((2*k+2)*(2*k+1))*(partials_cos);
    }
  return sinus_x / cosin_x;
}

int main() {
  char buf[0x30];
  double x = atof(fgets(buf, 0x30, stdin));
  printf("tan(x) = %0.4f\n", tan(x));
  return 0;
}

