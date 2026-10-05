#include<stdio.h>
void arr_update(int arr[],int size);
int int_input();
int check_size(int pos,int size);
void print_array(int arr[],int size);
void arr_update(int arr[],int size){
    printf("Enter the updated value::");
    int value=int_input();
    printf("Enter the position in which you want to update::");
    int pos=int_input();
    if(check_size(pos,size)==1){
        arr[pos-1]=value;
        print_array(arr,size);
    }
    else{
        printf("Invalid position\n");
        arr_update(arr,size);
    }
}
int array_input(int arr[]){
    printf("no. of elements you want to enter::");
    int size=int_input();
    for(int i=0;i<size;i++){
        printf("Element at %dth position:",i);
        arr[i]=int_input();
    }
    print_array(arr,size);
    return size;
}
void print_array(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
int check_size(int pos,int size){
    if(pos<=size){ 
        return 1;
    }
    else{
        return 0;
    }
}
int int_input(){
    int a;
    scanf("%d",&a);
    return a;
}
int main(){
    int arr[100];
    int size=array_input(arr);

    arr_update(arr,size);
}