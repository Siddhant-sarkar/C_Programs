#include<stdio.h>
#include<math.h>

int main(){
    int number=0;
    printf("Please write a number : ");
    scanf("%d",&number);
    int copy_num=number;

    int cubic_sum=0;
    int temp=0;
    do
    {
        temp=number%10;
        int power=pow(temp,3);
        printf("the cube is %d\n",power);
        cubic_sum+=pow(temp,3);
        number/=10;
    
    } while (number!=0);
    if(cubic_sum==copy_num){
        printf("The number %d is an Amstrong Number \n",copy_num);
    }else
    {
        printf("The number %d is not  an Amstrong Number \n",copy_num);
    }
    

    return 0;
}