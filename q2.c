#include<stdio.h>
int int_input();
int arr_input(int arr[]);
void print_arr(int arr[],int size);
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
    int even[100];
    int size_even=0;
    int odd[100];
    int size_odd=0;
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            even[size_even]=arr[i];
            size_even++;
        }
        else{
            odd[size_odd]=arr[i];
            size_odd++;
        }
    }
    print_arr(even,size_even);
    print_arr(odd,size_odd);

}