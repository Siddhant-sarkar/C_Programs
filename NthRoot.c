#include<stdio.h>
#include<math.h>

int main(){
    float number;
    float power;
    printf("Write the number ");
    scanf("%f",&number);
    printf("Write the nth root ");
    scanf("%f",&power);
    
    float root;
    root=powf(number,1/power);
    printf("the [%f]",power);
    printf("th root of [%f]",number);
    printf("is [%f]",root);

    return 0;

}