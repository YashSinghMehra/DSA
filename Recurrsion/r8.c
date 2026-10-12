#include<stdio.h>
int binary_search(int arr[],int size,int search,int lb,int ub){
    if(lb>ub){
        return -1;
    }
    int mid=(ub+lb)/2;
    if(arr[mid]==search){
        return mid;
    }
    else if(search>arr[mid]){
        mid=binary_search(arr,size,search,mid+1,ub);
        return mid;
    }
    else{
        mid=binary_search(arr,size,search,lb,mid-1);
        return mid;
    }
    return -1;
}
int main(){
    int arr[]={1,2,4,5,6,7,8,11};
    int size=8;
    int search=6;
    printf("element at %dth index",binary_search(arr,size,search,0,size-1));

}