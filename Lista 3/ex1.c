#include <stdio.h>

int contaDigitos(int num); 

int main(void) {
  int num;
  
  printf("Informe um numero: ");
  scanf("%d", &num);
  
  printf("Qtd de digitos: %i", contaDigitos(num));
};

int contaDigitos(int num) {
  int contaDigitos = 0;
  
  if (num == 0) {
  contaDigitos = 1;
  } else while (num != 0) {
    contaDigitos = contaDigitos + 1;
    num = num / 10;
  };
  return contaDigitos;
};