/*5.22-Escreva segmentos de programas que realizem cada uma das tarefas seguintes: 
a) Calcule a parte inteira do quociente quando um inteiro a é dividido por um 
inteiro b. 
b) Calcule o resto inteiro quando um inteiro a é dividido por um inteiro b. 
c) Use os segmentos de programa desenvolvidos em a) e b) para escrever uma 
função que receba um inteiro  entre 1 e 32767 e o imprima com uma série de 
dígitos, separados por dois espaços. Por exemplo, o inteiro 4562 deve ser impresso 
como 
4  5  6  2 
*/
#include <stdio.h>

int quociente(int,int), resto(int,int);
void numeroSeparado(void);

int main(void){
    numeroSeparado();
}

int quociente(int a, int b){
    return a/b;
}

int resto(int a, int b){
    return a%b;
}

void numeroSeparado(void){
    int numero,digito, divisor=1;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    
    while (divisor<numero)
    {
        divisor*=10;
    }
    divisor/=10;

    while(divisor>=1){
        digito = quociente(numero,divisor);
        printf("%d ", digito);
        numero = resto(numero,divisor);
        divisor/=10;
    }
    

}