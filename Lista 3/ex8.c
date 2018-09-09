#include <stdio.h>
#include <string.h>

int retirarCarcteresFrase(char frase[], int tamanhoFrase, char carecterSubstituido);

void main() {
  char frase[256], caracterSubstituido;

  printf("Digite a frase: ");
  scanf("%[^\n]s", &frase);
  printf("Informe o caracter que deverá ser substituido: ");
  scanf(" %c", &caracterSubstituido);

  printf("Total de trocas: %d", retirarCarcteresFrase(frase, strlen(frase), caracterSubstituido));
};

int retirarCarcteresFrase(char frase[], int tamanhoFrase, char carecterSubstituido) {
  int ocorrenciasCaracter=0;
  for(int i=0; i<tamanhoFrase; i++) {
    if(frase[i]==carecterSubstituido) {
      frase[i] = '*';
      ocorrenciasCaracter++;
    };
  };
  printf("%s\n", frase);
  return ocorrenciasCaracter;
};