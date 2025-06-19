/*A função floor pode ser usada para arredondar um número até uma determinada 
casa decimal. A instrução  
y = floor(x * 10 +  .5)  / 10; 
arredonda x para décimos (a primeira posição à direita do ponto decimal, ou 
vírgula). A instrução 
y = floor(x * 100 + .5)  / 100; 
arredonda x para centésimos (i.e., a segunda posição à direita do ponto decimal, ou 
vírgula). Escreva um programa que defina quatro funções para arredondar um 
número x de várias maneiras 
a) arredondaParaInteiro(numero) 
b) arredondaParaDecimos(numero) 
c) arredondaParaCentesimos(numero) 
d) arredondaParaMilesimos(numero) 
Para cada valor lido, seu programa deve imprimir o valor original, o número 
arredondado para o inteiro mais próximo, o número arredondado para o décimo 
mais próximo, o número arredondado para o centésimo mais próximo e o número 
arredondado para o milésimo mais próximo. */

#include <stdio.h>
#include <math.h>
double numero = 3.14159,y;
double arredondaParaInteiro(double);
double arredondaParaDecimos(double);
double arredondaParaCentesimos(double);
double arredondaParaMilesimos(double);

int main(){
    printf("%f\n%f\n%f\n%f",arredondaParaInteiro(numero), arredondaParaDecimos(numero), arredondaParaCentesimos(numero), arredondaParaMilesimos(numero));
    return 0;
}

double arredondaParaInteiro(double numero){
    y=floor(numero+.5);
    return y;    
}
double arredondaParaDecimos(double numero){
    y=floor(numero*10+.5)/10;
    return y;
 }
double arredondaParaCentesimos(double numero){
    y=floor(numero*100+.5)/100;
    return y;
}
double arredondaParaMilesimos(double numero){
    y=floor(numero*1000+.5)/1000;
    return y;
}