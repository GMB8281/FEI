#include <stdio.h>
#include "calculadora.h"

int menu_soma(){
    float a; float b;
    printf("\nDigite o valor de a: ");
    scanf("%f",&a);
    printf("\nDigite o valor de b: ");
    scanf("%f",&b);
    float n= soma(a,b);
    printf("\n%f\n",n);
}

int menu_subtracao(){
    float a; float b;
    printf("\nDigite o valor de a: ");
    scanf("%f",&a);
    printf("\nDigite o valor de b: ");
    scanf("%f",&b);
    float n= subtracao(a,b);
    printf("\n%f\n",n);
}

int menu_multiplicacao(){
    float a; float b;
    printf("\nDigite o valor de a: ");
    scanf("%f",&a);
    printf("\nDigite o valor de b: ");
    scanf("%f",&b);
    float n= multiplicacao(a,b);
    printf("\n%f\n",n);
}

int menu_divisao(){
    float a; float b;
    printf("\nDigite o valor de a: ");
    scanf("%f",&a);
    printf("\nDigite o valor de b: ");
    scanf("%f",&b);
    if (a==0 && b==0 || b==0){
        printf("\nDivisao invalida!\n");
    }else{
        float n= divisao(a,b);
        printf("\n%f\n",n);
    }
}

int menu_operacoes(){
    MENU:
    int o=0;
    printf("\nDigite a operacao desejada: ");
    printf("\n1. Soma");
    printf("\n2. Subtracao");
    printf("\n3. Divisao");
    printf("\n4. Multiplicacao\n");
    scanf("%d",&o);

    switch (o){
        case 1: menu_soma(); break;
        case 2: menu_subtracao(); break;
        case 3: menu_divisao(); break;
        case 4: menu_multiplicacao(); break;
        default: printf ("\nDigite uma opcao valida.\n"); goto MENU; break;
    }
}


int main() {
    menu_operacoes();
    return 0;
}