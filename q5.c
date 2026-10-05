#include<stdio.h>
int int_input();
int arr_input(int arr[]);
void print_arr(int arr[],int size);
int zero_check(int arr[],int size);
int zero_insert(int arr[],int size);
int zero_insert(int arr[],int size){
    int mid=size/2;
    for(int i=size;i>=mid;i--){
        arr[i]=arr[size-1];
    }
    arr[mid]=0;
    print_arr(arr,size);
    return size++;
}
int zero_check(int arr[],int size){
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            return i;
        }
    }
    
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
    int index_zero=zero_check(arr,size);


}