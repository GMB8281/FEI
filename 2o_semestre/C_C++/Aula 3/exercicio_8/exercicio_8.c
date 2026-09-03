#include<stdio.h>

int circulo(){
    float r;
    printf("Digite o raio do círculo: ");
    scanf("%f",&r);
    float S = r*r*3;
    printf("A área aproximada do círculo é de %f\n", S);
}

int triangulo(){
    float h;
    float b;
    printf("Digite a altura do triangulo: ");
    scanf("%f",&h);
    printf("Digite a base do triangulo: ");
    scanf("%f",&b);
    float S=(b*h)/2;
    printf("A área aproximada do triangulo é de %f\n", S);
}

int retangulo(){
    float h;
    float b;
    printf("Digite a altura do retangulo: ");
    scanf("%f",&h);
    printf("Digite a base do retangulo: ");
    scanf("%f",&b);
    float S=b*h;
    printf("A área aproximada do retangulo é de %f\n", S);
}


int menu_operacoes(){
    MENU:
    int o=0;
    printf("\n1. Calcular área do círculo");
    printf("\n2. Calcular área do retângulo");
    printf("\n3. Calcular área do triângulo");
    printf("\n4. Sair\n");
    scanf("%d",&o);

    switch (o){
        case 1: circulo(); break;
        case 2: retangulo(); break;
        case 3: triangulo(); break;
        case 4: break;
        default: printf ("\nDigite uma opcao valida.\n"); goto MENU; break;
    }
}


int main() {
    menu_operacoes();
    return 0;
}