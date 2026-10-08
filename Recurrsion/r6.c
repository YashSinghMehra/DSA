#include<stdio.h>
void fabo(int a,int b,int n){
    printf("%d\t",a);
    if(n>1){
        fabo(b,a+b,n-1);
    }
}
int main(){
    int n;
    printf("n=");
    scanf("%d",&n);
    fabo(0,1,n);
}