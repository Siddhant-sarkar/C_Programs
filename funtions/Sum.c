#include<stdio.h>
void sum(int n){
    int sum=0;
    while (n>0)
    {
        sum+=n%10;
        n/=10;
    }
    printf("the sum is %d",sum);
}
int main(){
    sum(225);

}