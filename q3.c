#include<stdio.h>
int int_input();
int arr_input(int arr[]);
void print_arr(int arr[],int size);
int check(int arr[],int size,int ele);
int check(int arr[],int size,int ele){
    for(int i=0;i<size;i++){
        if(arr[i]==ele){
            return i;
        }
    }
    return -1;
}
void print_arr(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
int arr_input(int arr[]){
    printf("Enter the size of array::");
    int size=int_input();
    for(int i=0;i<size;i++){
        printf("Enter the element at %dth index::",i);
        arr[i]=int_input();
    }
    print_arr(arr,size);
    return size;
}
int int_input(){
    int a;
    scanf("%d",&a);
    return a;
}
int main(){
    int arr[100];
    int size=arr_input(arr);
    int k=0;
    int ele[100];
    int value[100];
    for(int i=0;i<size;i++){
        int x=check(ele,k,arr[i]);
        if(x!=-1){
            value[x]++;
        }
        else{
            ele[k]=arr[i];
            value[k]=1;
            k++;
        }
    }
    for(int j=0;j<k;j++){
        printf("%d-->%d\n",ele[j],value[j]);
    }
}