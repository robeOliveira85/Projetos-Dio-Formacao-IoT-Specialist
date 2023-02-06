#include <stdio.h>
int main(void){
    
    int a, b, c, somaAB; 
    scanf("%d %d %d", &a, &b, &c);
    somaAB = a + b; 

    if(somaAB == c) { 
        printf("A + B é igual a C\n");
    } 
    else
    if (somaAB > c) {
        printf("A + B é maior que  C\n");
    } 
    else {
        printf("A + B é menor que C\n");
    }


    getchar();
    return 0;
}
