#include <stdio.h>
#include <string.h>

char * removerCaractere(char stringRemocao[], char caractereRemocao);

void main() {
  char stringRemocao[256], caractereRemocao;

  printf("Digite uma string: ");
  scanf("%[^\n]s", &stringRemocao);

  printf("Forneca o caractere a ser removido: ");
  scanf(" %c", &caractereRemocao);

  printf("Nova String: %s", removerCaractere(stringRemocao, caractereRemocao));
};

char * removerCaractere(char stringRemocao[], char caractereRemocao) {
  for(int i=0; i<strlen(stringRemocao); i++) {
    if(stringRemocao[i] == caractereRemocao) {
      stringRemocao[i] = ' ';
    };
  };
  return stringRemocao;
};