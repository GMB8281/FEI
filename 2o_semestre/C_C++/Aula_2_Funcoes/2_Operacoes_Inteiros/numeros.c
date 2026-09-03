int eh_par(int a){
    if (a % 2 == 0){
        return 0;
    }else{
        return 1;
    }
}
int eh_primo(int a){
    int divisores=0;
    for (int i=a; i>0; i--){
        if (a%i == 0){
            divisores++;
        }
    }
    if (divisores>2 || a==1){
        return 1;
    }else{
        return 0;
    }
}
int fatorial(int a){
    int n=a;
    for (int i=a-1; i>0; i--){
        n=n*i;
    }
    return n;
}
int eh_maior(int a, int b){
    if (a>b){
        return a;
    }else{
        return b;
    }
}
float potencia(int a, int b){
    float n=a;
    if (b>0){
        for (int i=b-1; i>0; i--){
        n=n*a;
        }
    }
    if (b==0){
        n=1;
    }
    if (b<0){
        for (int i=b-1; i>0; i--){
            n=n*a;
        }
        n=1/n;
    }
    return n;
}