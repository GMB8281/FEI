#include <stdio.h>

void main(){
    float x=0;
    int i;
    float n=0;
    for (i=0; i<3;i++){
        scanf ("%f",&n);
        x = x + n;
    }
    printf("%f",x);
}