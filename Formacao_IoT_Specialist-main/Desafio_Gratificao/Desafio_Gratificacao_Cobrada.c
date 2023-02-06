// Para ler e escrever dados em C, utilizamos os seguintes métodos da classe Console:  
// - scanf(): lê o(s) dado(s) de Entrada (Inputs) do usuário; 
// - printf(): imprime um texto de Saída (Output) no console;
// - A função getchar() retorna o código ASCII inteiro correspondente ao caractere lido
// - o Return 0 ao final significa que o programa foi executado com sucesso, como pretendia fazer.

#include<stdio.h>

#define GRATIFICACAO 0.05
#define IMPOSTO 0.07

#define CALC_GRATIFICAO(salarioBase) (GRATIFICACAO *salarioBase)
#define CALC_IMPOSTO(salarioBase) (IMPOSTO *salarioBase)

float calcularSalarioFinal(float salarioBase){
    return salarioBase + CALC_GRATIFICAO(salarioBase) - CALC_IMPOSTO(salarioBase);
} 

int main(void) {
    float salarioBase, gratificacao, imposto, salarioFinal;
    scanf("%f%*c", &salarioBase);
    
    salarioFinal = calcularSalarioFinal(salarioBase);
    printf("Salario final: %.2f",salarioFinal);
}