#include <stdio.h>

float ler_numero(int *valido) {
    float numero;
    printf("Digite o numero: ");
    if (scanf("%f", &numero) != 1) {
        *valido = 0;
    } else {
        *valido = 1;
    }
    return numero;
}

unsigned int converter_para_bits(float numero) {
    return *(unsigned int *)&numero;
}

int obter_sinal(unsigned int bits) {
    return (bits >> 31) & 1;
}

long long obter_bias_binario(unsigned int bits) {
    int bias_decimal = (bits >> 23) & 0xFF;
    long long numero_binario_bias = 0;
    long long posicao_bias = 1;
    int temp_bias = bias_decimal;
    
    while (temp_bias > 0) {
        int resto = temp_bias % 2;
        numero_binario_bias += (resto * posicao_bias);
        temp_bias /= 2;
        posicao_bias *= 10;
    }
    
    return numero_binario_bias;
}

void imprimir_ieee754(int bit_sinal, long long numero_binario_bias, unsigned int bits) {
    printf("REPRESENTACAO FINAL IEEE 754 (32 BITS):\n");
    printf("Sinal | Bias     | Mantissa\n");
    printf("%d     | %08lld | ", bit_sinal, numero_binario_bias);
    
    for (int j = 22; j >= 0; j--) {
        int bit_mantissa = (bits >> j) & 1;
        printf("%d", bit_mantissa);
    }
    printf("\n");
}

int main() {
    int entrada_valida;
    
    float numero = ler_numero(&entrada_valida);
    if (!entrada_valida) {
        printf("Entrada invalida.\n");
        return 1;
    }
    
    unsigned int bits = converter_para_bits(numero);
    int bit_sinal = obter_sinal(bits);
    long long numero_binario_bias = obter_bias_binario(bits);
    
    imprimir_ieee754(bit_sinal, numero_binario_bias, bits);
    
    return 0;
}