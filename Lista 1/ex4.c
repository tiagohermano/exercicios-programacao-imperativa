#include <stdio.h>
void main()
{
  int num;
  printf("Informe um número: ");
  scanf("%d", &num);
  printf("DIVISORES DE %d: ", num);
  for(int index = 0;index < num; index+=1) {
    if(num % index == 0) {
      printf("%d \n", index);
    };
  };
}