/*Escreva uma função potencialnt (base, expoente) que retorne o valor de 
base^expoente 
Por exemplo, potencialnt (3,4) =3 * 3 * 3 * 3. Admita que expoente é um inteiro 
positivo, diferente de zero, e base é um inteiro. A função potencialnt deve usar for  
para controlar o cálculo. Não use nenhuma das funções da biblioteca matemática. */
#include <stdio.h>

int base,expoente;

void potencialnt(int, int);

int main(void){
    potencialnt(base,expoente);
    return 0;
}

void potencialnt(int base, int expoente){
    
    int resultado=1;

    printf("Digite a base e o expoente:");
    scanf("%i %i", &base, &expoente);

    printf("potencialnt(%i,%i)=", base,expoente);
    for(int i=0; i<expoente;i++){
        resultado*=base;
        printf("%i * ", base);
    }
    printf("= %i", resultado);
}