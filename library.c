#include<stdio.h>
int main(){
    int no_of_days=0;

    printf("PLease enter the number of days : ");
    scanf("%d",&no_of_days);

    if (no_of_days<=5)
    {
        printf("YOur fine is 5 paise");
    }else if (no_of_days>5&&no_of_days<=10)
    {
        printf("Your fine is 1 rupees");
    }else if (no_of_days>10&&no_of_days<=30)
    {
        printf("Your fine is 5 rupees");
    }
    else{
        printf("Your library membership is cancelled");
    }
    return 0;

}