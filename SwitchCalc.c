#include<stdio.h>
int main(){
    float number1;
    float number2;
    float result;
    char whatToDo;
    printf("Enter your 1st number : \n");
    scanf("%f",&number1);
    printf("Enter your 2nd number : \n");
    scanf("%f",&number2);
    printf("PLease tell what to do : \n");
    scanf(" %c",&whatToDo);

    switch (whatToDo)
    {
    case '+':
        printf("THe sum of two Numbers is %f",number1+number2);
        break;
    case '-':
        printf("THe diffrence of two Numbers is %f",number1-number2);
        break;
    case '*':
        printf("THe product of two Numbers is %f",number1*number2);
        break;
    case '/':
        printf("THe division of two Numbers is %f",number1/number2);
        break;
    default:
        printf("Please enter a recongnized task + - * /");
        break;
    }
    return 0;
}