#include<stdio.h>
void swap(int m,int n){
    int temp=m;
    m=n;
    n=temp;
    printf("The number are M: %d and N: %d\n",m,n);
}
void swapNoTemp(int m,int n){
    m=m+n;
    n=m-n;
    m=m-n;
    printf("The number are M: %d and N: %d\n",m,n);
}
int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    printf("The number are M: %d and N: %d\n",m,n);
    swap(m,n);
    swapNoTemp(m,n);
    printf("The number are M: %d and N: %d\n",m,n);


}