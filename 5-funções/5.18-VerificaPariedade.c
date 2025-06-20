/*Escreva um programa que receba uma série de inteiros e remeta um deles de cada 
vez para a função even que usa o operador resto (modulus) para determinar se um 
inteiro é par. A função deve utilizar um argumento inteiro e retornar 1 se o inteiro 
for par e 0 em caso contrário. */

#include <stdio.h>
#define TAM 5

int x[TAM];

void receberInteiro();
void verificaPariedade();
int even(int);

int main(){
    receberInteiro();
    verificaPariedade();
    
}

void receberInteiro(){
    for(int i=0;i<TAM;i++){
        printf("Digite o %d elementos X: ", i+1);
        scanf("%i", &x[i]);
        even(x[i]);
    }
}

int even(int x){
    for(int i=0; i<TAM;i++){
        if(x%2==0){
            return 1;
        }else{
            return 0;
        }
    }
    return 0;
}

void verificaPariedade(){
    for(int i=0;i<TAM;i++){
        if(even(x[i])==1){
            printf("O numero %d eh par!\n",x[i]);
        }else{
            printf("O numero %d eh impar!!\n",x[i]);
        }
    }
}