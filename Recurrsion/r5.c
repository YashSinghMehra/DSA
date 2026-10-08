#include<stdio.h>
int rev_arr(int arr[],int size){
    if(size>0){
        printf("%d\t",arr[size-1]);
        rev_arr(arr,size-1);
    }
    return 0;
}
int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    int x=rev_arr(arr,size);

}