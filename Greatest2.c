#include<stdio.h>
int main(){
    printf("Enter the 3 digits : ");
    int a;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);
    int c;
    scanf("%d",&c);
    int d;
    int numGreater;

    numGreater=(a>b?(a>c?(numGreater=a):(numGreater=c)):(b>c?(numGreater=b):(numGreater=c)));
    
    printf("The greatest number is %d",numGreater);
      return 0;
}