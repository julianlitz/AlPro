#include <stdio.h>
#include <stdlib.h>

//Berechnung des ggT mittels des Euklidischen Algorithmus
//Die Variable r Bezeichnet im jeden Schritt den Rest der Division
int ggT(int x, int y){
  int r;
  if (x == 0){
    return abs(y);
  }
  if (y == 0){
    return abs(x);
  }
  while (y!=0){
    r =  x%y;
    x = y;
    y = r;
  }
  return abs(x);
}

//Berechnung des kgV über den größten gemeinsamen Teiler 
int kgV(int x, int y){
  return abs(x * y) / ggT(x,y);
}

int main() {
  char buf[0x30];
  int x = atoi(fgets(buf, 0x30, stdin));
  int y = atoi(fgets(buf, 0x30, stdin));
  printf("ggT(x,y) = %d, kgV(x,y) = %d\n", ggT(x,y), kgV(x,y));
  return 0;
}

