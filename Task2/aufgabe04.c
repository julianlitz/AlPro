#include <stdio.h>
#include <stdlib.h>

int number_of_ones_in_binary(int x){
  int count = 0;
  while (x > 0){
    count+=1;
    //Bitwise UND von x und x-1 sorgt dafür, dass wir in jeder Iteration die letzte 1 in Binärdarstellung verlieren.
    //Sobald keine 1 mehr in Binärdarstellung vorhanden ist terminiert der Algorithmus.
    //Da wir in jeder Iteration genau eine Eins eliminieren arbeitet der Algorithmus korrekt.
    x = x & (x-1);
    }
  return count;
}

int main() {
  char buf[0x30];
  int x = atoi(fgets(buf, 0x30, stdin));
  printf("%d\n", number_of_ones_in_binary( abs(x)) );
}

