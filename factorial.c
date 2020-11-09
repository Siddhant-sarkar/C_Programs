#include<stdio.h>
int main(){
    int fact=1;
    int num;
    int temp=num;
    int temp2=num;

    printf("Please enter the number you want to find the Factorial : \n");
    scanf("%d",&num);

    for (int i = num; i > 0; i--)
    {
        fact*=i;
    }
    printf("THe Factorial of numbre with for %d is %d",num,fact);

    while (temp>0)
    {
        fact*=num;
        num--;
    }
    printf("THe Factorial of numbre while %d is %d",num,fact);

    do
    {
        fact*=num;
        num--;
    } while (temp2>0);
    printf("THe Factorial of numbre do- while %d is %d",num,fact);

    
    

    
}
