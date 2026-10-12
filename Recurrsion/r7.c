#include<stdio.h>
#include<math.h>
int digits(int num){
    if(num==0){
        return 0;
    }
    return 1+digits(num/10);
}
int rev(int num,int digit){
    if(num>0){
        int rem=num%10;
        return ((rem)*pow(10,digit-1)+rev(num/10,digit-1));
    }
    return 0;
}
int main(){
    int num;
    printf("ENTER THE NUMBER::");
    scanf("%d",&num);
    printf("reverse=%d\n",rev(num,digits(num)));
    int reverse=rev(num,digit(num));
    if(reverse==num){
        printf("num is palindrome");
    }
    else{
        printf("not a palindrome");
    }

}