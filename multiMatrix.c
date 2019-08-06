#include<stdio.h>
int main(){
    int arr[50][50],brr[50][50],crr[50][50],rowSize1=0,columnSize1=0,rowSize2=0,columnSize2=0;

    printf("Enter the rowSize and columnSize:");
    scanf("%d %d",&rowSize1,&columnSize1);

    printf("Enter the first matrix:\n");
    for(int i=0;i<rowSize1;i++)
        for(int j=0;j<columnSize1;j++)
            scanf("%d",&arr[i][j]);
    
    printf("Enter the rowsize and columnsize:\n");
    scanf("%d %d",&rowSize2,&columnSize2);
    
    printf("Enter the second matrix:\n");
    for(int i=0;i<rowSize2;i++)
        for(int j=0;j<columnSize2;j++)
            scanf("%d",&brr[i][j]);

    printf("The result of multiplication is:\n");
    if(columnSize1 == rowSize2){
        
        for(int i=0;i<rowSize1;i++){
            for(int j=0;j<columnSize1;j++){
                for(int k=0;k<rowSize2;k++){
                    crr[i][j] = crr[i][j] + arr[i][k]*brr[k][j];
                }
                printf("%d\t",crr[i][j]);
            }
            printf("\n");
        }

    }
    else
    {
        printf("The multiplication is not possible\n");
    }
    
    return 0;
}
    