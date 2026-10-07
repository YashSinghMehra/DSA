#include<stdio.h>
int print_num(i,n){
    if(i>n){
        return;
    }
    printf("%d\t",i);
    print_num(i+1,n);
}
int main(){
    int x=print_num(1,5);
}