#include<stdio.h>

int main(){
    int term1=0;
    int term2=1;
    int print=0;
    int num;
    
    printf("Write the nmber of terms for which you want to seee the series : \n");
    scanf("%d",&num);
    printf("*********THE SERIES IS*********\n");
    printf("%d\n",term1);
    printf("%d\n",term2);
    for (size_t i = 0; i < num; i++)
    {
        print=term1+term2;
        printf("%d\n",print);
        term1=term2;
        term2=print;
    }
    
}