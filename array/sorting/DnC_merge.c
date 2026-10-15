#include<stdio.h>
void print_arr(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
int arr_input(int arr[]){
    int size;
    printf("size of array::");
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        printf("element at %dth index::",i);
        scanf("%d",&arr[i]);
    }
    return size;
}
void merge(int arr[],int lb,int ub,int mid){
    int i=lb;
    int j=mid+1;
    int k=0;
    int temp[ub-lb+1];
    while(i<=mid&&j<=ub){
        if(arr[i]<=arr[j]){
            temp[k]=arr[i];
            i++;
        }
        else{
            temp[k]=arr[j];
            j++;
        }
        k++;
    }
    while(i<=mid){
        temp[k]=arr[i];
        i++;
        k++;
    }
    while(j<=ub){
        temp[k]=arr[j];
        j++;
        k++;
    }

    for(i=lb,k=0;i<=ub;i++,k++){
        arr[i]=temp[k];
    }
}
void mergesort(int arr[],int lb,int ub){
    if(lb<ub){
        int mid=(lb+ub)/2;
        mergesort(arr,lb,mid);
        mergesort(arr,mid+1,ub);

        merge(arr,lb,ub,mid);
    }
}
int main(){
    int arr[100];
    int size=arr_input(arr);
    print_arr(arr,size);
    mergesort(arr,0,size-1);
    print_arr(arr,size);

}