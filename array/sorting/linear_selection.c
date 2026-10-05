# include<stdio.h>
void print_arr(int arr[],int size);
int int_input();
int arr_input(int arr[]);
void selection_sort(int arr[],int size);
void swap(int *a,int *b);
void swap(int *a,int *b){
    int c=*a;
    *a=*b;
    *b=c;
}
void selection_sort(int arr[],int size){
    int k;
    for(k=1;k<size;k++){
        int min=k-1;
        for(int i=k;i<size;i++){
            if(arr[min]>arr[i]){
                min=i;
            }
        }
        swap(&arr[k-1],&arr[min]);
    }
    print_arr(arr,size);
}
int arr_input(int arr[]){
    printf("Enter the no. of elements in array::");
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
void print_arr(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[100];
    int size=arr_input(arr);
    selection_sort(arr,size);
}