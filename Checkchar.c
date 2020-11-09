
#include<stdio.h>
int main(){
    char temp;
    printf("Please enter a Character : \n");
    scanf("%c",&temp);


    if (temp>='A'&&temp<='Z')
    {
        printf("%c is an UpperCase Character",temp);
    }else if (temp>='a'&&temp<='z')
    {
        printf("%c is an Lower Case Character",temp);
    }else if (temp>='0'&&temp<='9')
    {
        printf("%c is an NUmber Character",temp);
    }else{
        printf("%c is an Special Character",temp);
        
    }


    return 0;
    
    
    
    
}