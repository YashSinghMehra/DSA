# include<stdio.h>
void pattern(int n){
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
int main(){
    while(1){
        int n;
        printf("Enter the no. of rows::");
        scanf("%d",&n);
        if(n>0){
            pattern(n);
            break;
        }
        else{
            printf("invalid input\nEnter no. of rows>0;\n");
        }
    }
}