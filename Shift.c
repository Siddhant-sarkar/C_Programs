#include<stdio.h>
int main(){
    int d=5;
    // scanf(d,&d);
    printf("Our variable d is(0101 = 5 ) : %d\n",d);
    printf("Now shifting the D to left\n");
    printf("Now printing the shifted D(1010 = 10) : %d\n",d<<1);
    printf("Now shifting the D to right\n");
    printf("Now printing the shifted D (10 = 2) : %d\n",d>>1);

    return 0;

}