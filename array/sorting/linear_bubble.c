#include<stdio.h>
int arr_input(int arr[]);
int int_input();
void bubble_sort(int arr[],int size);
void print_arr(int arr[],int size);
void print_arr(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

void bubble_sort(int arr[],int size){
    int k=size;
    for(int i=0;i<size;i++){
        for(int j=0;j<k;j++){
            if(arr[j]>arr[j+1]){
                int c=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=c;
            }
        }
        k--;
    }
    print_arr(arr,size);
}
int int_input(){
    int a;
    scanf("%d",&a);
    return a;
}
int arr_input(int arr[]){
    printf("Enter the no. of elements in array::");
    int size=int_input();
    for(int i=0;i<size;i++){
        printf("Element at %dth index::",i);
        arr[i]=int_input();
    }
    return size;
}

int main(){
    int arr[100];
    int size=arr_input(arr);
    print_arr(arr,size);
    bubble_sort(arr,size);
}