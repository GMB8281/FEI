#include <stdio.h>

int main() {
    float numeros[3];
    for (int i=0; i<3; i++){
        printf("Digite o %d° numero: \n",i+1);
        scanf("%f",&numeros[i]);
    }
    
    int acumulador;
    
    for (int i=0; i<2; i++){
        if (numeros[i]>=numeros[i+1]){
            acumulador=numeros[i+1];
            numeros[i+1]=numeros[i];
            numeros[i]=acumulador;
        }
    }
    
    printf("\nMenor: %f\n",numeros[0]);
    printf("\nMaior: %f\n",numeros[2]);
    
    return 0;
}