#include<stdio.h>
int int_input();
void print_array(int arr[],int size);
int arr_insertion(int arr[],int size){
    printf("size=%d\n",size);
    printf("Enter the element you want to insert::");
    int ele=int_input();
    printf("Enter the position in which you want to insert new element::");
    int pos=int_input();
    for(int i=size;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=ele;
    return ++size;
}

int int_input(){
    int a;
    scanf("%d",&a);
    return a;
}

int int_arr_input(int arr[]){
    printf("no. of elements you want to enter into array::");
    int size=int_input();
    for(int i=0;i<size;i++){
        printf("element at %dth index::",i);
        arr[i]=int_input(arr[i]);
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

int main(){
    int arr[100];
    int size=int_arr_input(arr);
    size=arr_insertion(arr,size);
    printf("size=%d\n",size);
    print_array(arr,size);
}