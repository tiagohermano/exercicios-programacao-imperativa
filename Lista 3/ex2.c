#include <stdio.h>
#include <math.h>

int numReverso(int num);
void main() {
  int num;

  printf("Digite um numero: ");
  scanf("%i", &num);

  printf("Número reverso: %i", numReverso(num));
};

int numReverso(int num) {
  int dig[5];
  int i, j;
  for(i=0; num; i++) {  
    dig[i] = num % 10;
    num /= 10;
  };

  for(j=0; j<i; j++) {
    num += dig[j] * pow(10, (i-j-1)); 
  };

  return num;
};