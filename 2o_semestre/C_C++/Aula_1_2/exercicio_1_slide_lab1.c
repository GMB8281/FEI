#include <stdio.h>

void main(){
    int notas [4];
    printf("Digite a nota da P1: \n");
    scanf("%d",&notas[0]);
    printf("Digite a nota da P2: \n");
    scanf("%d",&notas[1]);
    printf("Digite a nota do projeto: \n");
    scanf("%d",&notas[2]);
    printf("Digite a nota final do laboratório: \n");
    scanf("%d",&notas[3]);
    int NF = (notas[0]*0.3)+(notas[1]*0.4)+(notas[2]*0.2)+(notas[3]*0.1);
    printf("Nota final: %d",NF);
}