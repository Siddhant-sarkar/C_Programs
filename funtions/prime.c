#include<stdio.h>
int prime(int number);
void printPrime(int start,int end);


int main(){
    int number=0;
    printf("Please write a number ");
    scanf("%d",&number);
    if (prime(number))
    {
        printf("Number %d is prime number ",number);
    }else{
        printf("Number %d is not a prime number ",number);
    }
    int start=0,end=0;
    scanf("%d%d",&start,&end);
    printPrime(start,end);
}
void printPrime(int start,int end){
    for (int j = start; j <= end; j++)
    {
        if (prime(j))
        {
            printf("Prime number is %d\n",j);
        }
        
    }

}

int prime(int number){
    for (size_t i = 2; i < number; i++)
    {
        if ((number%i)==0)
        {
            // printf("Nmber is not a prime");
            return 0;
        }
        
    }
    // printf("number is a prime");
    return 1;
    
}
