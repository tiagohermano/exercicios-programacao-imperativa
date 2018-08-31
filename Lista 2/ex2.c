#include <stdio.h>

void main() {
  // float notasAlunos[7] = { 2, 4, 7.2, 8.9, 6, 9, 10 };
  float notasAlunos[7];
  float notaEscolhida;
  _Bool notaEscolhidaExiste = 0;

  for(int i=0; i<7; i++) {
    printf("informa a nota do aluno %i: ", i+1);
    scanf("%f", &notasAlunos[i]);
  }

  printf("informe a nota a ser procurada: ");
  scanf("%f", &notaEscolhida);

  for(int i=0; i<7; i++) {
    if(notaEscolhida == notasAlunos[i]) {
      notaEscolhidaExiste = 1;
    };
  };

  if(notaEscolhidaExiste) {
    printf("A nota escolhida existe");
  } else {
    printf("A nota escolhida não existe");
  }
}