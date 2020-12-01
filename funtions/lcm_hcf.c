#include<stdio.h>
int lcm(int num1,int num2);
int hcf(int num1,int num2);



int main(){
    // lcm();
    int num1,num2;
    printf("Please enter the numbers : ");
    scanf("%d %d",&num1,&num2);
    printf("Hcf is : %d\n",hcf(num1,num2));
    printf("Lcm is : %d",lcm(num1,num2));

    
}
int lcm(int num1,int num2){
    return ((num1*num2)/hcf(num1,num2));
}
int hcf(int num1,int num2){
    int remainder=1;
    int hcf;
    while (remainder!=0)
    {   hcf=num2/num1;
        remainder=num2%num1;
        num2=num1;
        num1=remainder;
    }
    return hcf;
    
}

