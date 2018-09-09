#include <stdio.h>

float calcularMediaNota(float notas[], char tipoMedia);

void main() {
  float notas[3];
  char tipoMedia;

  for(int i=0; i<3; i++){
    printf("informe o valor da %iª nota: ", i+1);
    scanf("%f", &notas[i]);
  };
  printf("Informe o tipo de média desejada \n[ a -> media aritmetica, p -> media ponderada ]: ");
  scanf(" %c", &tipoMedia);

  printf("\nresultado da média: %.1f", calcularMediaNota(notas, tipoMedia));
};

float calcularMediaNota(float notas[], char tipoMedia) {
  if(tipoMedia != 'a' && tipoMedia != 'p') {
    return 0; // caractere inválido
  };
  if(tipoMedia=='a') {
    return (notas[0]+notas[1]+notas[2])/3;
  } else if (tipoMedia=='p') {
    return notas[0]*0.5+notas[1]*0.3+notas[2]*0.2;
  };
};