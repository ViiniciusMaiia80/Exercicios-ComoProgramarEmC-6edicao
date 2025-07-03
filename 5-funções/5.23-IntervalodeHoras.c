/*5.23-Escreva uma função que obtenha a hora como três argumentos inteiros (para horas, 
minutos e segundos) e retorne o número de segundos desde a última vez que o 
relógio "soou as horas". Use essa função para calcular o intervalo de tempo em 
segundos entre duas horas, ambas dentro de um ciclo de doze horas do relógio. */

#include <stdio.h>
 int segundos_desde_hora_cheia(int,int,int);
 int intervalo_entre_horas(int,int,int,int,int,int);

 int main(){
    printf("%i segundos", intervalo_entre_horas(23,00,00,2,00,00));
    return 0;
}

int segundos_desde_hora_cheia(int hora, int minuto, int segundo){
    hora = hora % 12;
    return minuto*60+segundo;
}

int intervalo_entre_horas(int hora1, int minuto1, int segundo1, int hora2,int minuto2, int segundo2){
    int tempo1= hora1*3600 + segundos_desde_hora_cheia(hora1,minuto1,segundo1);
    int tempo2= hora2*3600 + segundos_desde_hora_cheia(hora2,minuto2,segundo2);
    printf("%d %d ", tempo1,tempo2);
    int diferenca = (tempo2-tempo1);
    if(diferenca<0){
        diferenca+= 12*3600;
    }
    return diferenca;
}