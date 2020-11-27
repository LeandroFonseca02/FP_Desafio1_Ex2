/*
Ismat - Engenheiria Informática 1º Ano
Fundamentos de Programação - Prof. Fracisco Pereira
Leandro Fonseca
17/11/2020 - 21:08
Resumo: Ler dois numeros e imprimir por ordem crescente
Inputs: int intNumA, int intNumB
Outputs:
 */
#include <stdio.h>


int main() {

    float fltNumA,fltNumB;

    printf("Insira um numero (A): ");
    scanf("%f",&fltNumA);

    printf("Insira um numero (B): ");
    scanf("%f",&fltNumB);

    if (fltNumA<fltNumB){
        printf("A < B => %f < %f", fltNumA,fltNumB);
    }else if(fltNumA>fltNumB){
        printf("B < A => %f < %f", fltNumB,fltNumA);
    }else{
        printf("A = B => %f = %f",fltNumA,fltNumB);
    }

    return 0;
}
