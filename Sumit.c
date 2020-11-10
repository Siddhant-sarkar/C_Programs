#include<stdio.h>
int main(){
    int sum=0;
    int n=0;
    while (n!=-999)
    {
        printf("Please enter a number n : \n");
        scanf("%d",&n);
        if (n!=-999)
        {
        sum+=n;
        }
        
    }
    printf("The sum is %d",sum);
    
}