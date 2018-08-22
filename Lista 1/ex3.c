#include <stdio.h>
void main()
{
  int controle;
  int acumulador = 0;
  int numAtual = 0;
  scanf("%d", &controle);
  for(int index = 0;index < controle;)
  {
    numAtual+=1;
    if(numAtual % 2 != 0) {
      printf("%d \n", numAtual);
      acumulador+=numAtual;
      index++;
    }
  };
  printf("Soma total: %d \n", acumulador);
}