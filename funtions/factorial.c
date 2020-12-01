#include<stdio.h>
int factorial(int number);
int factorialRecr(int number);
int main(){
    int number=0;
    printf("Please write a number for finding the factorial");
    scanf("%d",&number);
    printf("%d\n",factorial(number));
    printf("%d\n",factorialRecr(number));
}
int factorial(int number){
    int anwer=1;
    for (size_t i = 1; i <= number; i++)
    {
        anwer*=i;
    }
    return anwer;
}
int factorialRecr(int number){
    if (number==0)
    {
        return 1;
    }
    return number*factorialRecr(number-1);
    
}