# Conversor IEEE 754 (32 bits)

Feito por Gabriel Marinov e Daniel Torres

Funções:

*   `ler_numero`: Responsável por interagir com o usuário, ler a entrada via teclado e validar se é um número válido.
*   `converter_para_bits`: Utiliza conversão de ponteiros para ler a região de memória do float como um inteiro sem sinal (unsigned int), permitindo a manipulação bit a bit.
*   `obter_sinal`: Realiza operações de deslocamento de bits para isolar e retornar o bit mais significativo (o 32º bit).
*   `obter_bias_binario`: Extrai os 8 bits do expoente e converte o valor decimal para uma representação binária armazenada em uma variável long long para facilitar a impressão.
*   `imprimir_ieee754`: Recebe as partes separadas e as imprime formatadas na tela, iterando sobre os 23 bits da mantissa para imprimi-los um a um.
*   `main`: Função principal que chama as demais.