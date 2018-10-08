#include <stdio.h>

void main() {
  float floatMat[3][3];
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      floatMat[i][j] = i+j;
      printf("Endereço de memória da linha %i e coluna %i: %p\n", i+1, j+1, &floatMat[i][j]);
    }
  }
};