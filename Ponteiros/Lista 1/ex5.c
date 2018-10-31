#include <stdio.h>

int ordenarNumeros(int *a, int *b, int *c);

void main() {
  int a, b, c;

  printf("Informe o primeiro valor:");
  scanf("%i", &a);
  printf("Informe o segundo valor:");
  scanf("%i", &b);
  printf("Informe o terceiro valor:");
  scanf("%i", &c);

  int respostaFuncao = ordenarNumeros(&a,&b,&c);
  printf("primeira variável: %i,\nsegunda variável: %i, \nterceira variável: %i", a, b, c);
  printf("\nretorno da função: %i", respostaFuncao);  
}

int ordenarNumeros(int *a, int *b, int *c) {
  if(a==b && b==c) {
    return 1;
  };

  // *a = *c;
  // *c = *a;
  int *intTemp;
  if(b>a) {
    intTemp = b;
    b = a;
    a = intTemp;
  }

  if(c>a) {
    intTemp = c;
    c = a;
    c = intTemp;
  }

  // if(b>a && b>c) {
  //   int intTemp = a;
  //   a = b;
  //   if(a>c) {
  //     b = a;
  //   } else {
  //     b = c;
  //   }
  // } else if(c>a && c>b) {
  //   int intTemp = c;
  //   a = c;
  //   if()
  // }

  // if(a>b && b>c) {
    
  // } else if(b>a && c>a) {

  // } else if(b>a && a>c) {

  // } else if(c>a && b>a) {
    
  // }
  return 0;
};