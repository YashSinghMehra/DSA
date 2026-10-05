#include<stdio.h>
int int_input(){
    int a;
    scanf("%d",&a);
    return a;
}
int main(){
    int arr[100];
    int i=0;
    printf("Enter the size of array::");
    int size=int_input();
    while(i<size){
        printf("Element ar %dth index::",i);
        int temp=int_input();
        if(temp%2==0){
            arr[i]=temp;
            i++;
        }
        else{
            printf("Enter even no. only::\n");
        }
    }
    for(int j=0;j<size;j++){
        printf("%d\t",arr[j]);
    }
}