#include<stdio.h>
int main(){
    int number1;
    printf("Please write 1st number");
    scanf("%d",&number1);
    int number2;
    printf("Please write 2nd number");
    scanf("%d",&number1);
    int sum=number1+number2;
    int diffrence=number1-number2;
    int product=number1*number2;
    float dividing=number1/(float) number2;
    printf("The sum %d",&sum);
    printf("The diffrence %d",&diffrence);
    printf("The product %d",&product);
    printf("The division %d",&dividing);
}