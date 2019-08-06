#include<stdio.h>
int main(){
    int arr[50][50]={0};
    int rowSize,columnSize,j=0,i=0,zeroElement=0;
    printf("Enter the number of row elements:\n");
    scanf("%d",&rowSize);
    printf("Enter the number of column elements:\n");
    scanf("%d",&columnSize);

    printf("Enter the matrix in a row wise manner:\n");
    for(i=0;i<rowSize;i++){
        for(j=0;j<columnSize;j++){
            scanf("%d",&arr[i][j]);
            if(arr[i][j] == 0)
                zeroElement++;
        }
    }

    if(zeroElement > ((rowSize * columnSize)/2))
        printf("The given matrix is a sparse matrix\n");
    else
    {
            printf("The given matrix is not a sparse matrix\n");
    }
    
    return 0;
}