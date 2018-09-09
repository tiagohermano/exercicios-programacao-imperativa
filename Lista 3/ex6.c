#include <stdio.h>

float calcularMediaNota(float nota1, float nota2, float nota3, char tipoMedia);

void main() {
  float nota1, nota2, nota3;
  char tipoMedia;

  printf("Informe a primeira nota: ");
  scanf("%f", &nota1);
  printf("Informe a segunda nota: ");
  scanf("%f", &nota2);
  printf("Informe a terceira nota: ");
  scanf("%f", &nota3);
  printf("Informe o tipo de média desejada \n[ a -> media aritmetica, p -> media ponderada ]: ");
  scanf(" %c", &tipoMedia);

  printf("\nresultado da média: %.1f", calcularMediaNota(nota1, nota2, nota3, tipoMedia));
};

float calcularMediaNota(float nota1, float nota2, float nota3, char tipoMedia) {
  if(tipoMedia != 'a' && tipoMedia != 'p') {
    printf("caiu na condição invalida");
    return 0; // caractere inválido
  };
  if(tipoMedia=='a') {
    return (nota1+nota2+nota3)/3;
  } else if (tipoMedia=='p') {
    return nota1*0.5+nota2*0.3+nota3*0.2;
  };
};