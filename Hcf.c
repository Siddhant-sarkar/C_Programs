#include<stdio.h>
int main(){
    int num1,num2,hcf;
    printf("Please enter the numbers : ");
    scanf("%d %d",&num1,&num2);

    if(num1==num2){
        printf("The highest common factor is %d",num1);
    }else{
        if (num1>num2)
        {
            for (size_t i = 1; i <= num2; i++)
            {
                if (num2%i==0)
                {
                    if (num1%i==0)
                    {
                        hcf=i;
                    }
                    
                }
                
            }
            
        }else{
            for (size_t i = 1; i <= num1; i++)
            {
                if (num1%i==0)
                {
                    if (num1%2==0)
                    {
                        hcf=i;
                    }
                    
                }
                
            }
        }
    }

        printf("The Hcf is %d",hcf);

}