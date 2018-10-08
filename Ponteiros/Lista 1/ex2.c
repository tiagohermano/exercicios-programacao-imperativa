#include <stdio.h>

void main() {
  int arrFloat[10] = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0 };
  for(int i=0; i<10; i++){
    printf("Endereço de memória da posição %i: %p\n", i, &arrFloat[i]);
  }
}