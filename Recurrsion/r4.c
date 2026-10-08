#include<stdio.h>
int sum(int n){
    if(n>0){
    return n+sum(n-1);
    }
}
int main(){
    int n;
    printf("Enter the no. of natural no. you want to add::");
    scanf("%d",&n);
    printf("sum=%d",sum(n));
}