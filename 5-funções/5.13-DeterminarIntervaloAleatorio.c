/*Escreva instruções que atribuam inteiros aleatórios à variável n nos seguintes 
intervalos: 
a) 1 <= n <= 2 
b) 1 <= n <= 100 
c) 0 <= n <= 9 
d) 1000 <= n <= 1112 
e) -1 <= n <= 1 
f) -3 <= n <= 11*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
double n[]={};
int main(){
    srand(time(NULL));

    printf("a) 1 <= n <= 2\n");
    for(int i=0; i<3;i++){
        n[i]=1+rand()%2;
        printf("%.2f\n", n[i]);
    }

    printf("b) 1 <= n <= 100\n");
    for(int i=0;i<3; i++){
        n[i]= 1 +rand()%100;
        printf("%.2f\n", n[i]);
    }

    printf("c) 0 <= n <= 9\n");
    for(int i=0;i<3;i++){
        n[i] = rand()%9;
        printf("%.2f\n", n[i]);
    }


    printf("d) 1000 <= n <= 1112\n");
    for(int i=0;i<3;i++){
        n[i] = 1000 + rand()%1112;
        printf("%.2f\n", n[i]);
    }

    printf("e) -1 <= n <= 1\n");
    for(int i=0; i<3;i++){
        n[i] = -1 + rand()%1;
        printf("%.2f\n", n[i]);
    }

    printf("f) -3 <= n <= 11\n");
    for(int i=0; i<3; i++){
        n[i] = -3 + rand()%11;
        printf("%.2f\n", n[i]);
    }
    return 0;    
}