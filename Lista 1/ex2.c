#include <stdio.h>
void main()
{
  int controle;
  scanf("%d", &controle);
  for(int index = 1;index <= controle;index++)
  {
    printf("%d \n", 2*index);
  };
}