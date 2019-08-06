#include<stdio.h>
int main(){
    int arr[50][50],brr[50][50],rowSize=0,columnSize=0;

    printf("Enter the rowSize and columnSize:");
    scanf("%d %d",&rowSize,&columnSize);

    printf("Enter the first matrix:\n");
    for(int i=0;i<rowSize;i++)
        for(int j=0;j<columnSize;j++)
            scanf("%d",&arr[i][j]);
    printf("Enter the second matrix:\n");
    for(int i=0;i<rowSize;i++)
        for(int j=0;j<columnSize;j++)
            scanf("%d",&brr[i][j]);
        
    printf("The Result of addition of these matrix:\n");

    for(int i=0;i<rowSize;i++){
        for(int j=0;j<columnSize;j++){
            printf("%d\t",arr[i][j]+brr[i][j]);
        }
        printf("\n");
    }
    printf("The Result of substraction of these matrix:\n");
    for(int i=0;i<rowSize;i++){
        for(int j=0;j<columnSize;j++){
            printf("%d\t",arr[i][j]-brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}