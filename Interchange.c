#include<stdio.h>
int main(){
    //Declaring variables
    int variable1=10;
    int variable2=20;
    int temp=0;
    
    printf("The First Variable is now %d\n",variable1);
    printf("The Second Variable is now %d\n",variable2);
    //Transfering the Values
    temp=variable1;
    variable1=variable2;
    variable2=temp;

    //printing to confirm...
    printf("The First Variable is now %d\n",variable1);
    printf("The Second Variable is now %d\n",variable2);

    getchar();
    return 0;
}