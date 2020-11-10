#include<stdio.h>

int main(){
    int num=0;
    printf("Enter the number for table : \n");
    scanf("%d",&num);
    printf("**************USING FOR LOOP***************\n");
    for(int i=1;i<11;i++){
        printf("%d times %d = %d\n",num,i,num*i);
    }
    printf("*****************************\n");
    printf("**************USING FOR WHILE LOOP***************\n");
    int temp=1;
    while (temp<11)
    {
        printf("%d times %d = %d\n",num,temp,num*temp);
        temp++;
    }
    printf("*****************************\n");
    printf("**************USING FOR DO-WHILE LOOP***************\n");
    int temp2=1;
    do{
        printf("%d times %d = %d\n",num,temp2,num*temp2);
        temp2++;
    }while (temp2<11);
    printf("*****************************\n");
    
    return 0;
}