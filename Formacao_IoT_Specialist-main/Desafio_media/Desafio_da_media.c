//Instruções:
/// Para ler e escrever dados em C, utilizamos os seguintes métodos da classe Console:  
// - scanf(): lê o(s) dado(s) de Entrada (Inputs) do usuário; 
// - printf(): imprime um texto de Saída (Output) no console;
// - A função getchar() retorna o código ASCII inteiro correspondente ao caractere lido
// - o Return 0 ao final significa que o programa foi executado com sucesso, como pretendia fazer.


//Código:

#include <stdio.h>

int main(void)
{
    float a, b, c, media; // declara as variáveis

    scanf("%f%*c", &a); // realiza a leitura do valor de entrada e armazena em &a
    
    scanf("%f%*c", &b);
    
    scanf("%f%*c", &c);

    media = ((a + b + c) / 3); // calcula a média aritmética e armazena em media

    printf("Media = %.2f\n", media); // exibe o resultado

    return (0);
}

