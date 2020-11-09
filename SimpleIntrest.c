#include<stdio.h>
#include<math.h>
int main(){
    float principle;
    float rate;
    float time;

    printf("Write Priciple \n");
    scanf("%f",&principle);
    printf("Write Rate \n");
    scanf("%f",&rate);
    printf("Write time \n");
    scanf("%f",&time);

    float Si=(principle*rate*time)/100;
    printf("********************");
    printf("\nThe Si is %f",Si);
    printf("\n********************");

    return 0;
}