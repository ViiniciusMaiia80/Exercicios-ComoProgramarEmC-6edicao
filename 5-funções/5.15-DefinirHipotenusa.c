/*5.15-Defina uma função hipotenusa que calcule o comprimento da hipotenusa de um 
triângulo retângulo, ao serem fornecidos os catetos. Use essa função em um 
programa para determinar o comprimento da hipotenusa de cada um dos seguintes 
triângulos. A função deve utilizar dois argumentos do tipo double e retornar a 
hipotenusa com o tipo double. 
Triângulo   Lado 1    Lado 2 
1           3.0        5.0 
2           8.0        4.0 
3           12.0       15.0 */
#include <stdio.h>
#include <math.h>
double hipotenusa(double,double);

int main(void){
    double Lado1[3]={3,8,12}, Lado2[3]={5,4,15};

    for(int i=0;i<3;i++){
        printf("A hipotenusa do triangulo %d: %lf\n", i+1, hipotenusa(Lado1[i],Lado2[i]) );
    }
    return 0;
}

double hipotenusa(double Lado1, double Lado2){
    double Hipotenusa;
    Hipotenusa = sqrt(pow(Lado1,2)+pow(Lado2,2));
    return Hipotenusa;
}