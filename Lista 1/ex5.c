#include <stdio.h>
void main()
{
  int limInferior=0;
  int limSuperior=0;
  while(limInferior >= limSuperior) {
    printf("Informe o limite inferior: ");
    scanf("%d", &limInferior);
    printf("Informe o limite superior: ");
    scanf("%d", &limSuperior);
  };
  printf("Numeros contidos entre limites: \n");
  for(int index = limInferior;index < limSuperior;index++) {
    printf("%d \n", index);
  }
}