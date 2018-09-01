#include <stdio.h>

void main() {
  int temps[12] = { 10, 20, 32, 22, 39, 40, 32, 30, 31, 32, 29, 28 };
  char meses[12][12] = { "Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro" };
  int maiorTemp=0, menorTemp=100, maiorTempMes, menorTempMes;
  printf("Temperaturas dos meses em graus celsius: \n");
  for(int i=0; i<12; i++) {
    printf("%s: ", meses[i]);
    printf("%dºC\n", temps[i]);
  };

  for(int i=0; i<12; i++){
    for(int j=0; j<12; j++){
      if(temps[i] > temps[j]) {
        if(temps[i] > maiorTemp) {
          maiorTemp = temps[i];
          maiorTempMes = i;
        };
      } else if(temps[i] < temps[j]) {
        if(temps[i] < menorTemp) {
          menorTemp = temps[i];
          menorTempMes = i;
        };
      };
    };
  };

  printf("\nMaior temperatura do ano aconteceu no mês de %s", meses[maiorTempMes]);
  printf(" e fez %dº\n", maiorTemp);
  printf("Menor temperatura do ano aconteceu no mês de %s", meses[menorTempMes]);
  printf(" e fez %dº", menorTemp);
};