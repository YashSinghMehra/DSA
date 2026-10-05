# include <stdio.h>
void swap(int *a,int *b){
    int c=*a;
    *a=*b;
    *b=c;
}
int main(){
    int arr[]={3,5,1};
    swap(&arr[1],&arr[2]);
    for(int i=0;i<3;i++){
        printf("%d\t",arr[i]);
    }
    printf("Hello");
}