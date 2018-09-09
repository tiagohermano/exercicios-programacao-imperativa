#include <stdio.h>

int somaNumsEntre2NumsInt(int num1, int num2);

void main() {
  int num1, num2;
  printf("informa o 1º numero inteiro: ");
  scanf("%d", &num1);
  printf("informa o 2º numero inteiro: ");
  scanf("%d", &num2);
  printf("a soma dos números contidos entre os dois números inteiros informados é igual a %d", somaNumsEntre2NumsInt(num1, num2));
};

int somaNumsEntre2NumsInt(int num1, int num2) {
  int acumulador=0;
  if(num1>num2) {
    num2++;
    while(num1<num2) {
      acumulador+=num2;
      num2++;
    };
  } else {
    num1++;
    while(num1<num2) {
      acumulador+=num1;
      num1++;
    };
  };
  return acumulador;
};

