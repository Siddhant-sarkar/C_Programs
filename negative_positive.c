#include<stdio.h>

int main(){
    int number=0;
    printf("Please enter a number \n");
    scanf("%d",&number);

    printf("********BY USING IF/ELSE**********\n");
    if (number>=0)
    {
        printf("THe number %d is positive\n",number);
    }else
    {
        printf("THe number %d is negative\n",number);

    }

    printf("********BY USING TERNARY OPERATOR**********\n");
    ((number>=0)?(printf("THe number %d is positive\n",number)):(printf("THe number %d is negative\n",number)));
    
}