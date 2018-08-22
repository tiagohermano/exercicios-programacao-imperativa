#include <stdio.h>
void main()
{
  int num=0;
  printf("Informe um numero: ");
  scanf("%d", &num);
  printf("Divisores de %d: \n", num);
  for(int index = 1;index < num; index++) {
    if(num % index == 0) {
      printf("%d \n", index);
    };
  };
}