//Responda às seguintes perguntas a respeito de um array chamado fracoes. 
 //a) Defina uma constante simbólica TAMANHO a ser substituída pelo texto de substituição 10.
#include <stdio.h>
#define TAMANHO 10
//b) Declare um array com tantos elementos do tipo float quanto o valor de TAMANHO e inicialize os elementos com o valor 0
int main(void){
    float array[TAMANHO]={0};
    for(int i=0;i<TAMANHO;i++){
        printf("%.2f ", array);
        
    }
//c) Dê o nome do quarto elemento a partir do início do array. 
    float quartoElemento=array[4-1];
    
//d) Chame o elemento 4 do array. 
    printf("\nQuarto elemento %.2f\n", quartoElemento);
    
//e) Atribua o valor 1. 667 ao elemento nove do array. 
    array[9-1]=1.667;
    
//f) Atribua o valor 3.333 ao sétimo elemento do array. 
    array[7-1]=3.333;
//g) Imprima os elementos 6 a 9 do array com dois dígitos de precisão à direita do ponto decimal e mostre a saída que é realmente apresentada na tela. 
    for(int i=5;i<=9;i++){
        printf("elemento %i: %.2f \n",i+1, array[i]);
    }
printf("\n");
/*h) Imprima todos os elementos do array usando uma estrutura de repetição for. 
Admita que a variável inteira x foi definida como uma variável de controle para o 
loop. Mostre a saída do programa.*/
    for(int x=0;x<TAMANHO;x++){
        printf("Elemento %i: %f\n", x+1, array[x]);

    }
}