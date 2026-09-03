#include <stdio.h>

void main(){
    int x=0;
    int i;
    int n=0;
    for (i=0; i<3;i++){
        scanf ("%d",&n);
        x = x + n;
    }
    printf("%d",x);
}