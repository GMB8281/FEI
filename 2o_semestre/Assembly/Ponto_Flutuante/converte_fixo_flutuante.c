#include <stdio.h>

int bin[32];
int decimal_vet[14];

int clr() {
    for (int i = 31; i >= 0; i--) {
        bin[i] = 0;
    }
    for (int i = 13; i >= 0; i--) {
        decimal_vet[i] = 0;
    }
    return 0;
}

int sinal(float w) {
    if (w > 0) {
        bin[0] = 0;
    }
    if (w < 0) {
        bin[0] = 1;
    }
    return 0;
}

int ObterExpoenteN(float num) {
    // Retorna o n do 2^n para o Passo 3
    if (num == 0.0) return 0;
    if (num < 0) num = -num;
    
    int n = 0;
    
    while (num >= 2.0) {
        num /= 2.0;
        n++;
    }
    
    while (num < 1.0) {
        num *= 2.0;
        n--;
    }
    
    return n;
}

int DecParaBin(float num) {
    if (num == 0.0) return 0;
    if (num < 0) num = -num;
    
    while (num >= 2.0) {
        num /= 2.0;
    }
    
    while (num < 1.0) {
        num *= 2.0;
    }
    
    float parte_fracionaria = num - 1.0;
    for (int i = 1; i <= 23; i++) {
        parte_fracionaria *= 2.0;
        if (parte_fracionaria >= 1.0) {
            bin[i] = 1;
            parte_fracionaria -= 1.0;
        } else {
            bin[i] = 0;
        }
    }
    
    return 0;
}

int main() {
    float decimal;
    
    clr();
    scanf("%f", &decimal);
    sinal(decimal);
    
    DecParaBin(decimal);
    int n = ObterExpoenteN(decimal);
    
    return 0;
}