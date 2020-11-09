#include<stdio.h>

int main(){
    printf("Write the radius of Circle ");
    float radius;
    scanf("%f",&radius);
    float pi=3.14;
    float area=pi*radius*radius;
    printf("The area of the Circle is : %f",area);
    return 0;
}