#include<stdio.h>
#include<math.h>

int main(){
    int arr[50][50]={0},rowSize=0,columnSize=0,trace=0;
    float normal;
    printf("Enter the rowsize and column size:\n");
    scanf("%d %d",&rowSize,&columnSize);

    printf("Enter the elements\n");
    for(int i=0;i<rowSize;i++){
        for(int j=0;j<columnSize;j++){
            scanf("%d",&arr[i][j]);
            normal = normal + arr[i][j]*arr[i][j];
            if(i==j)
                trace = trace + arr[i][j];
        }
    }

    printf("The normal is %f\n the trace is %d\n",sqrt(normal),trace);
}