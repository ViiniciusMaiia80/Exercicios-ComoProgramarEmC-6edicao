/*Escreva uma função que mostre, na margem esquerda da tela, um quadrado de 
asteriscos cujo lado é especificado por um parâmetro inteiro lado. Por exemplo, se 
lado for igual a 4, a função exibe 
**** 
**** 
**** 
**** */
#include <stdio.h>
void square();
int asteristico;

int main(){
    square();   
}

void square(){
    printf("Digite a quantidade de asteristico que formara os lados do quadrado: ");
    scanf("%d", &asteristico);

    for(int i=0;i<asteristico;i++){
        for(int j=0;j<asteristico;j++){
            printf("*");
        }
        printf("\n");
    }
}