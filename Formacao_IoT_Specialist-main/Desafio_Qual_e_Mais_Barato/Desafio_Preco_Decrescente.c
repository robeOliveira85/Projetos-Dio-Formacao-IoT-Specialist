#include<stdio.h>

int main(void)
{
  int vet[3];
  int len = sizeof(vet) / sizeof(vet[0]);
  
  for (int i = 0; i< len; i++){
      scanf("%d",&vet[i]);
  }
  
  int temp =0;

  for (int i = 1; i < len; i++) {
      for (int j = 0; j < i; j++) {
          if (vet[i] > vet[j]) {
              temp = vet[i];
              vet[i] = vet[j];
              vet[j] = temp;
          }
      }
  }

  printf("%d, %d, %d",vet[0],vet[1],vet[2]);
  
 getchar();
 return 0;
 
}