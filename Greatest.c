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

    
    if (a>b)
    {
        numGreater=a;
        if (a>c)
        {
            numGreater=a;
        }
        else
        {
            numGreater=c;
        }   
    }else{
        numGreater=b;
        if (b>c)
        {
            numGreater=b;
        }
        else
        {
            numGreater=c;
        }    
    }
    printf("The greatest number is %d",numGreater);
      return 0;
}