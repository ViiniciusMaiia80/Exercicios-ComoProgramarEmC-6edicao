/*5.9 Uma garagem de estacionamento cobra $2,00 de taxa mínima para estacionar até
três horas. A garagem cobra um adicional de $0,50 por hora ou fração caso sejam
excedidas as três horas. A taxa máxima para qualquer período determinado de 24
horas é $10,00. Admita que nenhum carro fique estacionado por mais de 24 horas.

Escreva um programa que calcule e imprima as taxas de estacionamento para três
clientes que estacionaram ontem seus carros nessa garagem. Você deve fornecer as
horas que cada cliente ficou estacionado. Seu programa deve imprimir os
resultados organizados em um formato de tabela e deve calcular e imprimir o total
recebido no dia de ontem. O programa deve usar a função calcula-Taxas para
determinar o valor a ser cobrado de cada cliente. A saída de seu programa deve ter
o seguinte formato:
Carro    Horas   Taxa
1        1.5     2.00
2        4.0     2.50
3       24.0     10.00
TOTAL   29.5     14.50
*/

#include <stdio.h>
#include <math.h>
#define TAXMIN 2.0
#define TAXMAX 10.0
#define ADICIONAL 0.5
double horaCliente[]={1.5, 4.0, 24.0}, taxaCliente[]={};
void calcularTaxas(void);
void relatorioDiaAnterior(void);

int main(){
    calcularTaxas();
    relatorioDiaAnterior();
    return 0;
}

void calcularTaxas(void){
     for(int i=0;i<3;i++){
        if(horaCliente[i]>24.0){
            printf("A quantidade de horas nao pode ser maior que 24.\n REVEJA O BD\n");     
        }
        if(horaCliente[i]==24.0){
            taxaCliente[i]=TAXMAX;
            printf("%.2f\n", taxaCliente[i]);
        }
        if(horaCliente[i]<24.0 && horaCliente[i]>3.0){
            taxaCliente[i] = TAXMIN + ((ceil(horaCliente[i])-3.0) * ADICIONAL);
            printf("%.2f\n", taxaCliente[i]);
        }
        if(horaCliente[i]<3.0){
            taxaCliente[i]=TAXMIN;
            printf("%.2f\n", taxaCliente[i]);
        }  
    }    
}

void relatorioDiaAnterior(){
    double horaTotal=0, taxaTotal=0;
    printf("%s%9s%9s\n", "Carro", "Horas", "Taxa");
    for(int i=0;i<3;i++){
        printf("%3i%10.1f%10.2f\n", i+1, horaCliente[i], taxaCliente[i]); 
        horaTotal+= horaCliente[i];
        taxaTotal+= taxaCliente[i];
    }
    printf("%s%8.1f%10.2f", "TOTAL", horaTotal,taxaTotal); 
}
