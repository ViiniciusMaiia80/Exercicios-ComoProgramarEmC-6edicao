/*5.8 Mostre o valor de x após a execução de cada uma das seguintes instruções:
a) x = fabs(7.5)
b) x = floor(7.5)
c) x = fabs(0.0)
d) x = ceil(0.0)
e) x = fabs (-6.4)
f) x = ceil(-6.4)
g) x =ceil(-fabs(-8+floor(-5.5)))*/

#include <stdio.h>
#include <math.h>
int main(){
    double x;
    x=fabs(7.5); //pega o valor absoluto
    printf("%.1f\n",x);
    x=floor(8.5); //retorna o maior inteiro menor que o valor do argumento
    printf("%.1f\n",x);
    x=fabs(0.0);
    printf("%.1f\n",x);
    x=ceil(0.0); 
    printf("%.1f\n",x);
    x=fabs(-6.4);
    printf("%.1f\n",x);
    x = ceil(6.4); //arredonda para o menor numero inteiro maior que o argumento
    printf("%f\n",x);
    x=ceil(-fabs(-8+floor(-5.5)));
    printf("%f\n",x);

}