#include <stdio.h>
#include "conversoes.h"

int menu_celsius_fahrenheit() {
    int opcao;
    float valor;
    
    printf("\nCelsius / Fahrenheit\n");
    printf("1. Celsius para Fahrenheit\n");
    printf("2. Fahrenheit para Celsius\n");
    printf("Escolha a direcao da conversao: ");
    scanf("%d", &opcao);
    
    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);
    
    if (opcao == 1) {
        printf("\nResultado: %.2f C = %.2f F\n", valor, celsius_fahrenheit(valor));
    }
    if (opcao == 2) {
        printf("\nResultado: %.2f F = %.2f C\n", valor, fahrenheit_celsius(valor));
    }
}

int menu_metros_quilometros() {
    int opcao;
    float valor;
    
    printf("\nMetros / Quilometros\n");
    printf("1. Metros para Quilometros\n");
    printf("2. Quilometros para Metros\n");
    printf("Escolha a direcao da conversao: ");
    scanf("%d", &opcao);
    
    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);
    
    if (opcao == 1) {
        printf("\nResultado: %.2f m = %.4f km\n", valor, metros_quilometros(valor));
    }
    if (opcao == 2) {
        printf("\nResultado: %.4f km = %.2f m\n", valor, quilometros_metros(valor));
    }
}

int menu_segundos_minutos() {
    int opcao;
    float valor;
    
    printf("\nSegundos / Minutos\n");
    printf("1. Segundos para Minutos\n");
    printf("2. Minutos para Segundos\n");
    printf("Escolha a direcao da conversao: ");
    scanf("%d", &opcao);
    
    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);
    
    if (opcao == 1) {
        printf("\nResultado: %.2f s = %.2f min\n", valor, segundos_minutos(valor));
    }
    if (opcao == 2) {
        printf("\nResultado: %.2f min = %.2f s\n", valor, minutos_segundos(valor));
    }
}

int menu_operacoes(){
    int o;
    printf("\nDigite a operacao desejada: ");
    printf("\n1. Celsius/Fahrenheit");
    printf("\n2. Metros/quilometros");
    printf("\n3. Segundos/minutos\n");
    scanf("%d",&o);

    if (o==1){
        menu_celsius_fahrenheit();
    }
    if (o==2){
        menu_metros_quilometros();
    }
    if (o==3){
        menu_segundos_minutos();
    }
    return 0;
}

int main() {
    menu_operacoes();
    return 0;
}