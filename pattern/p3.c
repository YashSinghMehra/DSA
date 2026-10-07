# include<stdio.h>
int main(){
    int n;
    printf("Enter the no. of rows::");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<(2*n)-1;j++){
            if(i+j>=n-1 && j<=n-1){
                printf("%c",64+i+j+2-n);
            }
            else if(j-i<=n-1 && j>n-1){
                printf("%c",64+n-(j-i));
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}