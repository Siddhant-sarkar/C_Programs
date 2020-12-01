#include<stdio.h>
#include<math.h>
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
void sumofPrime(int number){
    for (size_t i = 2; i < number/2; i++)
    {
        if (isPrime(i)==1)
        {
            if (isPrime(number-i)==1)
            {
                printf("The numbers are %d  %d \n",number-i,i);
            }
            
        } 
    }
    
}
int main(){
    sumofPrime(16);
}