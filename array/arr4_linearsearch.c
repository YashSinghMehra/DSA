#include<stdio.h>
int int_input();
int array_input(int arr[]);
void print_array(int arr[],int size);
int linear_search(int arr[],int size);
int linear_search(int arr[],int size){
    printf("Enter the value to search::");
    int search=int_input();
    for(int i=0;i<size;i++){
        if(arr[i]==search){
            printf("Element found at %d position\n",i+1);
            return i+1;
        }
    }

    printf("Element not found\n");
    return -1;
        
}
int array_input(int arr[]){
    printf("Enter the no. of elements in array::");
    int size=int_input();
    for(int i=0;i<size;i++){
        printf("Element at %dth position::",i);
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
int int_input(){
    int a;
    scanf("%d",&a);
    return a;
}
int main(){
    int arr[100];
    int size=array_input(arr);
    int position=linear_search(arr,size);
    printf("%d",position);
}