#include <stdio.h>

int ordemVogalNoAlfabeto(char vogal);

void main() {
  char vogal;
  printf("informe uma vogal: ");
  scanf("%c", &vogal);
  
  if(ordemVogalNoAlfabeto(vogal)==0){
    printf("Charactere informado não é uma vogal");
  } else {
    printf("%dº vogal", ordemVogalNoAlfabeto(vogal));
  };
};

int ordemVogalNoAlfabeto(char vogal) {
  char vogais[5] = { 'a', 'e', 'i', 'o', 'u' };
  for(int i=0; i<5; i++) {
    if(vogal == vogais[i]) {
      return i+1;
    };
  };
  return 0;
};

