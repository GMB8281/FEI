#include<stdio.h>

int vet [15];
int par_count=0;
int c=0;

int par (int a){
    if (a%2==0 && a!=0){
        return 0;
    }
    else{
        return 1;
    }
}

int clr(){
    vet [15]=0;
    par_count=0;
}

int read(){
    for (int i=0; i<15; i++){
        printf("Digite o %d° valor ", i+1);
        scanf("%d",&vet[i]);
    }
}

int run_par(){
    for (int i=0; i<15; i++){
        int a= par(vet[i]);
        if (a==0){
            par_count++;
        }
    }
}
int print(){
    printf("\nPares: %d",par_count);
    printf("\nImpares: %d\n",(15-par_count));
}

int run(){
    read();
    run_par();
    print();
    clr();
}

int go(){
    while(c==0){
        printf("1. Executar\n");
        printf("2. Sair\n");
        int o;
        scanf("%d",&o);
        switch (o){
            case 1: run(); break;
            default: c=1; break;
        }
    }
}

int main(){
    go();
}