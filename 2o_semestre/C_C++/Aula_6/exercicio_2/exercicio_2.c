#include<stdio.h>

int main(){
    int array[5];
    int a=0;
    for (int i=0; i<5; i++){
        printf("Digite o %d° valor ", i+1);
        scanf("%d",&array[i]);
    }
    for (int i=0; i<5; i++){
        a=a+array[i];
    }
    for (int i=0; i<5; i++){
        if (array[i]>0){
            printf("%d\n",array[i]);
        }
    }
    printf("\n%d\n",a);
}