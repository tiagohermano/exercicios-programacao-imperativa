#include <stdio.h>

void main() {
  float nums[10] = { 3, 5, 6, 8, 2, 9, 15, 22, 1, 7 };
  float media;
  int maioresMedia = 0, menoresMedia = 0, iguaisMedia = 0;

  for(int i=0; i<10; i++) {
    media+=nums[i];
  };
  media=media/10;
  
  for(int i=0; i<10; i++) {
    if(nums[i] < media) {
      menoresMedia++;
    } else if(nums[i] > media) {
      maioresMedia++;
    } else {
      iguaisMedia++;
    };
  };
  printf("qtd de numeros menores que a media: %d\n", menoresMedia);
  printf("qtd de numeros maiores que a media: %d\n", maioresMedia);
  printf("qtd de numeros iguais a media: %d", iguaisMedia);
};