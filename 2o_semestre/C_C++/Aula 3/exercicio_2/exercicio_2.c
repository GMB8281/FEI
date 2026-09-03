#include <stdio.h>

float main(){
    float notas[3];
    for (int i=0; i<3; i++){
        printf("Digite a %dª nota: ",i+1);
        scanf("%f",&notas[i]);
    }
    float media= (notas[0] + notas[1] + notas[2])/3;
    if (media>=7){
        printf("Aprovado\n");
    }
    else if (media>=5){
        printf("Recuperação\n");
    }
    else{
        printf("Reprovado\n");
    }
}