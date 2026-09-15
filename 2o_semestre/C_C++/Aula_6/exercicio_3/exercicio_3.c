#include<stdio.h>


int array[2][8];
int a;

int posicao(int b){
    printf("Posição: \n");
    for (int i=0; i<8; i++){
        if (array[1][b]==array[0][i]){
            printf("%d\n",i);
        }
    }
}

int main(){
    int a;
    for (int i=0; i<8; i++){
        printf("Digite o %d° valor ", i+1);
        scanf("%d",&array[0][i]);
        array[1][i]=array[0][i];
    }
    for (int i=0; i<8; i++){
        for (int j=i+1; j<8;j++){
            if(array[1][i]>array[1][j]){ 
                a=array[1][i];
                array[1][i]=array[1][j];
                array[1][j]=a;
            }
        }
    }
    printf("Menor: %d\n",array[1][0]);
    posicao(0);
    printf("Maior: %d\n",array[1][7]);
    posicao(7);
}