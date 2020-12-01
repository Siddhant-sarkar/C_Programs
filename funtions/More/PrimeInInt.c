#include<stdio.h>

void printPrime(int n ,int m);
int isPrime();

int main(){
    printPrime(1,20);
}
void printPrime(int n ,int m){
    for (size_t i = n; i < m; i++)
    {
        if (isPrime(i)==1)
        {
            printf("THe prime is %d\n",i);
        }
        
    }
    
}
int isPrime(int n){
   for (size_t i = 2; i < n; i++)
   {
       if (n%i==0)
       {
           return 0;
       }
       
   }
   return 1;
   
    
}