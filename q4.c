#include<stdio.h>
int int_input();
int arr_input(int arr[]);
void print_arr(int arr[],int size);
int check(int arr[],int size,int ele);
int arr_deletion(int arr[],int size,int pos);
int check_position(int size,int pos);
int check_position(int size,int pos){
    if (size>=pos){
        return 1;
    }
    else{
        return 0;
    }
}
int arr_deletion(int arr[],int size,int pos){
    if (check_position(size,pos)==1){
        for(int i=pos-1;i<size-1;i++){
            arr[i]=arr[i+1];
        }
        arr[size-1]=0;
        return --size;
    }
}
int check(int arr[],int size,int ele){
    for(int i=0;i<size;i++){
        if(arr[i]==ele){
            return 1;
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
    for(int i=0;i<size;i++){
        int x=check(ele,k,arr[i]);
        if(x!=-1){
            size=arr_deletion(arr,size,i+1);
            i--;
        }
        else{
            ele[k]=arr[i];
            k++;
        }
    }
    print_arr(arr,size);
}