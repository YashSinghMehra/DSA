#include<stdio.h>
int int_input();
void print_array(int arr[],int size);
int check_position(int size,int pos){
    if (size>=pos){
        return 1;
    }
    else{
        return 0;
    }
}
int arr_deletion(int arr[],int size){
    printf("size=%d\n",size);
    printf("Enter the position in which you want to delete element::");
    int pos=int_input();
    if (check_position(size,pos)==1){
        for(int i=pos-1;i<size-1;i++){
            arr[i]=arr[i+1];
        }
        arr[size-1]=0;
        return --size;
    }
    else{
        printf("invalid position\n");
        arr_deletion(arr,size);
    }
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
    size=arr_deletion(arr,size);
    printf("size=%d\n",size);
    print_array(arr,size);
}