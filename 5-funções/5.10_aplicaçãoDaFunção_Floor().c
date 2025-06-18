/*5.10 Uma aplicação da função floor é arredondar um valor para o inteiro mais próximo. 
A instrução y = floor(x + .5); 
arredondará o número x para o inteiro mais próximo e atribuirá o valor a y. Escreva 
um programa que leia vários números e use a instrução anterior para arredondar 
cada um desses números para o inteiro mais próximo. Para cada número 
processado, imprima o número original e o número arredondado.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double x[5];
int main(){
    printf("%s%15s\n", "Original","Arredondado");
    for(int i=0;i<5;i++){
        x[i] = 1+rand()%20;
        printf("%.2f%15.2f\n",x[i]+.5, floor(x[i]+.5)); //floor(x) arredonda para o maior inteiro menor que x;
    }
    return 0;
}