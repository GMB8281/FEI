#include <stdio.h>
#include <string.h>

char numeros_string[4][10];
int numeros_inteiros[4];
int soma=0;

int recebe_numeros_string() {
    printf("Digite os números:\n");
    for (int i = 0; i < 4; i++) {
        if (fgets(numeros_string[i], sizeof(numeros_string[i]), stdin)) {
            numeros_string[i][strcspn(numeros_string[i], "\n")] = '\0';
        }
    }
    return 0;
}

int converter_em_inteiros() {
	for (int i=0; i<4; i++) {
		for (int j=0; j<4; j++) {
			for (int k=0; k<10; k++) {
				    if (numeros_string[i][j]==(k + '0')){
				        if (j==0){
				            numeros_inteiros[i]=numeros_inteiros[i]+(k*10);
				        }
				        if (j==1){
				            numeros_inteiros[i]=numeros_inteiros[i]+k;
				        }
				    }
				}
		}
	}
	return 0;
}

int soma_imprime(){
    for (int i=0; i<4; i++) {
        soma=soma+numeros_inteiros[i];
    }
    printf("Soma = %d",soma);
    return 0;
}


int main() {
	recebe_numeros_string();
	converter_em_inteiros();
	soma_imprime();
	return 0;
}