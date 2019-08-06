#include<stdio.h>
int main(){
    int arr[2][2]={0},determinant;
    printf("Enter the array of 2x2:\n");
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            scanf("%d",&arr[i][j]);
    
    determinant = arr[0][0] * arr[1][1] - arr[1][0]*arr[0][1];

    printf("The determinant is %d\n",determinant);
    return 0;
}