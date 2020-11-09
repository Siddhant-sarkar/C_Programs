#include<stdio.h>

int main(){
    float salary;

    printf("Please write the value of Salary : ");
    scanf("%f",&salary);

    float ta=0.1*salary;
    float da=0.12*salary;

    float GrossSalary=salary+ta+da;
    printf("The gross salary is %f",GrossSalary);


    return 0;

}
