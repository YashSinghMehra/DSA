#include<stdio.h>
int printrev(n){
    if(n==0){
        return;
    }
    printf("%d\t",n);
    printrev(n-1);
}
int main(){
    int x=printrev(5);
}