#include<stdio.h>
#include<math.h>
int main(){
    int number=0;
    int power=0;
    printf("Please enter the power : ");
    scanf("%d",&power);
    int power2=power;
    printf("Please enter the number : ");
    scanf("%d",&number);
    printf("**********************\n");
    for (size_t i = 0; i < power+1; i++)
    {
        printf("The %d of % d is %f\n",i,number,pow(number,i));
    }
    printf("**********************\n");
    while (power>0)
    {
        printf("The %d of % d is %f\n",power,number,pow(number,power));
        power--;
    }
    printf("**********************\n");

    do
    {
        printf("The %d of % d is %f\n",power2,number,pow(number,power2));
        power2--;
    } while (power2>0);
    printf("**********************\n");
    
    
    





 return 0;
}