#include<stdio.h>

void fibonacci(int number){
    int term1=0;
    int term2=1;
    int print=0;
    printf("*********THE SERIES IS*********\n");
    printf("%d\n",term1);
    printf("%d\n",term2);
    for (size_t i = 0; i < number-2; i++)
    {
        print=term1+term2;
        printf("%d\n",print);
        term1=term2;
        term2=print;
    }
    
}
int main(){
    fibonacci(5);
    return 0;
}