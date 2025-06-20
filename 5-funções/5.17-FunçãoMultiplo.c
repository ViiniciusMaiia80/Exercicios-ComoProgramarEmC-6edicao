/*5.17-Escreva uma função múltiplo que determine, para um par de números inteiros, se o 
segundo número é múltiplo do primeiro. A função deve ter dois argumentos 
inteiros e retornar 1 (verdadeiro) se o segundo número for múltiplo do primeiro, e 
0 (falso) em caso contrário. Use essa função em um programa que receba uma série 
de números inteiros. */
#include <stdio.h>
#define TAM 5

int multiplo(int, int);
void lerNumeros();
void exibirResultado();

int a[TAM], b[TAM];

int main(){ 
                lerNumeros();
    exibirResultado();
    return 0;

}

void lerNumeros(){
    printf("Exemplo de par= (x,y)\n");
    for(int i=0;i<TAM;i++){
        printf("Digite o elemento X do par %d: ", i+1);
        scanf("%d", &a[i]);
        printf("Digite o elemento Y do par %d: ", i+1);
        scanf("%d", &b[i]);
        
        multiplo(a[i],b[i]);
    }
}

void exibirResultado(){
    for(int i=0; i<TAM;i++){
        if(multiplo(a[i],b[i])==1){
            printf("%d eh multiplo de %d\n", b[i],a[i]);
        }else{
        printf("%d nao eh multiplo de %d\n", b[i],a[i]);
        }
    }
}

int multiplo(int a, int b){
    if(a==0){
        return 0;
    }if(b%a==0){
        return 1;
    }else{
        return 0;
    }

}
