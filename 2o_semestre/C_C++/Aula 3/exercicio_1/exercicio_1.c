#include <stdio.h>

int main(){
    int N[2];
    for (int i=0; i<2; i++){
        printf("Digite o %d° numero: ",i+1);
        scanf("%d",&N[i]);
    }
    if (N[0]>N[1]&& N[0]!=N[1]){
        printf("%d é maior. \n",N[0]);
    }
    else if (N[1]>N[0]&& N[0]!=N[1]){
        printf("%d é maior. \n",N[1]);
    }
    else{
        printf("%d e %d são iguais. \n",N[0],N[1]);
    }
}