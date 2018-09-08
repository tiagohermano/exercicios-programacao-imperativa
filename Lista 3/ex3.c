#include <stdio.h>

int multiplicarInteiros(int num1, int num2);
void main() {
  printf("resultado da operação: %d", multiplicarInteiros(2, 10));
};

int multiplicarInteiros(int num1, int num2) {
  static int acumulador = 0;
  if(num2>0) {
    acumulador+=num1;
  } else {
    return acumulador;
  };
  return multiplicarInteiros(num1,num2-1);
};