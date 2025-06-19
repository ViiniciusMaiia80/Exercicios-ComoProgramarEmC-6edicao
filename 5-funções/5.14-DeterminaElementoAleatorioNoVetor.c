/*Para cada um dos seguintes conjuntos de inteiros, escreva uma instrução simples 
que imprima um número aleatório do conjunto. 
a) 2, 4, 6, 8, 10. 
b) 3,5,7,9, 11. 
c) 6, 10, 14, 18,22.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 5

int a[TAM]={2,4,6,8,10}, b[TAM]={3,5,7,9,11}, c[TAM]={6,10,14,18,22};

int main(){
    int n;
    srand(time(NULL));

    printf("\nConjunto a = ");
    for(int i=0;i<TAM;i++){
        printf("%d, ",a[i]);
    }
    n=a[rand()%5];
    printf("\nNumero aleatorio do conjunto a: %d\n\n", n);

    printf("Conjunto b = ");
    for(int i=0;i<TAM;i++){
        printf("%d, ", b[i]);
    }
    n=b[rand()%5];
    printf("\nNumero aleatorio do conjunto b: %d\n\n",n);

    printf("Conjunto c = ");
    for(int i=0;i<TAM;i++){
        printf("%d, ", c[i]);
    }
    n=c[rand()%5];
    printf("\nNumero aleatorio do conjunto c: %d\n\n", n);

}