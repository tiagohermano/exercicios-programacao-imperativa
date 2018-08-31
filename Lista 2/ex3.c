#include <stdio.h>

void main() {
  int numeros[7];

  for(int i=0; i<7; i++) {
    printf("informe o %i numero:", i+1);
    scanf("%d", &numeros[i]);
  }

  for(int i=0; i<7; i++) {
    if(numeros[i] % 2 == 0) {
      printf("%d. ", i+1);
      printf("%d (PAR)\n", numeros[i]);
    } else {
      printf("%d. ", i+1);
      printf("%d (IMPAR)\n", numeros[i]);
    }
  }
}