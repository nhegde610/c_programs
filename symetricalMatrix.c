#include<stdio.h>
int main(){
    int rowSize,i=0,j=0,columnSize, arr[50][50],brr[50][50];

    printf("Enter the rowsize and columnsize:\n");
    scanf("%d %d",&rowSize,&columnSize);

    printf("Enter the matrix\n");
    for(i=0;i<rowSize;i++){
        for(j=0;j<columnSize;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<rowSize;i++){
        for(j=0;j<columnSize;j++){
            brr[i][j]= arr[j][i];
        }
    }

    for(i=0;i<rowSize;i++){
        for(j=0;j<columnSize;j++){
            if(brr[i][j] != arr[i][j]){
                printf("The given matrix is not a symetrical matrix\n");
                return 0;
            }
        }
    }
    printf("The given matrix is a symetrical matrix\n");
    return 0;
}