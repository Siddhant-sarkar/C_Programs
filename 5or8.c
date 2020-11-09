#include<stdio.h>
int main(){
    int a=0;
    printf("Please enter a number : \n");
    scanf("%d",&a);
    if (a%5==0||a%8==0)
    {
        if (a%5==0&&a%8==0)
        {
            printf("The number %d is  divisible by both 5 and 8\n ",a);
        }else
        {
            if (a%5==0)
            {
                printf("The number %d is  divisible by  5\n ",a);
            }else
            {
            printf("The number %d is  divisible by  8\n ",a);
                
            }
        }   
    }else{
        printf("The number %d is not divisible by 5 or 8\n ",a);
    }
    

}