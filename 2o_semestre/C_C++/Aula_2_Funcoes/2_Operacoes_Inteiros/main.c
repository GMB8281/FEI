#include <stdio.h>
#include "numeros.h"

int menu_par(){
    float a;
    printf("\nDigite o valor de a: ");
    scanf("%f",&a);
    int r;
    r= eh_par(a);
    if (r==0){
        printf("Eh par\n");
    }else{
        printf("Nao eh par\n");
    }
}

int menu_primo(){
    float a;
    printf("\nDigite o valor de a: ");
    scanf("%f",&a);
    int r;
    r= eh_primo(a);
    if (r==0){
        printf("Eh primo\n");
    }else{
        printf("Nao eh primo\n");
    }
}

int menu_fatorial(){
    float a;
    printf("\nDigite o valor de a: ");
    scanf("%f",&a);
    int r;
    r= fatorial(a);
    printf("%d\n",r);
}

int menu_maior(){
    float a; float b;
    printf("\nDigite o valor de a: ");
    scanf("%f",&a);
    printf("\nDigite o valor de b: ");
    scanf("%f",&b);
    int r;
    r= eh_maior(a,b);
    printf("%d\n",r);
}

int menu_potencia(){
    float a; float b;
    printf("\nDigite o valor de a: ");
    scanf("%f",&a);
    printf("\nDigite o valor de b: ");
    scanf("%f",&b);
    float r;
    r= potencia(a,b);
    printf("%f\n",r);
}

int menu_operacoes(){
    int o;
    printf("\nDigite a operacao desejada: ");
    printf("\n1. Verificar se e par");
    printf("\n2. Verificar se e primo");
    printf("\n3. Calcular fatorial");
    printf("\n4. Verificar qual numero e maior");
    printf("\n5. Calcular potencia\n");
    scanf("%d",&o);

    if (o==1){
        menu_par();
    }
    if (o==2){
        menu_primo();
    }
    if (o==3){
        menu_fatorial();
    }
    if (o==4){
        menu_maior();
    }
    if (o==5){
        menu_potencia();
    }
}


int main() {
    menu_operacoes();
    return 0;
}