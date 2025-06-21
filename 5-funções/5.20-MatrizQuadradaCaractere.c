/*Modifique a função criada no Exercício 5.19 para formar um quadrado de qualquer 
caracter que esteja contido como parâmetro fillCharacter. Dessa forma, se lado 
for igual a 5 e fillCharacter for "#". a função deve imprimir 
##### 
##### 
##### 
##### 
##### */

#include <stdio.h>

void square();
int digito;
char fillCharacter;

int main(){
    square();
}


void square(){
    printf("Digite a qtd de caractere: ");
    scanf("%d", &digito);
    printf("Digite qual caractere ira compor o quadrado: ");
    scanf(" %c", &fillCharacter);

    for(int i=0;i<digito;i++){
        for(int j=0;j<digito;j++){
            printf("%c", fillCharacter);
        }
        printf("\n");

    }
}

