/*Use técnicas similares às descritas nos Exercícios 5.19 e 5.20 para produzir um 
programa que faça gráficos com uma grande variedade de formas. */
#include <stdio.h>

int escolha,tamanho;
char caractere;

void lerDados(void);
void quadrado(void);
void triangulo(void);

int main(){
    lerDados();
    return 0;

}

void lerDados(void){
    printf("Escolha a forma que deseja imprimir:\n1-Triangulo\n2-Quadrado\nDigite um numero:");
    scanf("%d", &escolha);
    
    switch (escolha){
    case 1:
        triangulo();
        break;
    case 2:
        quadrado();
        break;
    default:
        printf("valor invalido");
        break;
    }
    
}

void triangulo(){
    printf("Digite o tamanho: ");
    scanf("%d", &tamanho);
    printf("Digite o caractere: ");
    scanf(" %c", &caractere);

    for(int i=0;i<tamanho;i++){
        for(int j=0;j<=i;j++){
            printf("%c", caractere);
        }
        printf("\n");
    }
}

void quadrado(void){
    printf("Digite o tamanho: ");
    scanf("%d", &tamanho);
    printf("Digite o caractere: ");
    scanf(" %c", &caractere);

    for(int i=0;i<tamanho;i++){
        for(int j=0; j<tamanho;j++){
            printf("%c", caractere);
        }
        printf("\n");
    }
}
