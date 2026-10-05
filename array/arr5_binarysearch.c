#include<stdio.h>
int binarysearch(int arr[],int size);
int int_input();
int array_input(int arr[]);
void print_array(int arr[],int size);
int binarysearch(int arr[],int size){
    printf("Enter the element you want to search::");
    int search=int_input();
    int lb=0;
    int ub=size-1;
    int mid;
    while(ub>=lb){
        mid=(lb+ub)/2;
        if(arr[mid]==search){
            printf("Element found at %dth position\n",mid+1);
            return mid+1;
        }
        else if(arr[mid]<search){
            lb=mid+1;
        }
        else{
            ub=mid-1;
        }
    }
    printf("Element not found\n");
    return -1;

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
int array_input(int arr[]){
    printf("Enter the size of array::");
    int size=int_input();
    for(int i=0;i<size;i++){
        printf("Enter the element at %dth index::",i);
        arr[i]=int_input();
    }
    print_array(arr,size);
} 
int main(){
    int arr[100];
    int size=array_input(arr);
    int position=binarysearch(arr,size);
    printf("%d",position);
    
}