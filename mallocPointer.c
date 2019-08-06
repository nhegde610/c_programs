#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,sum=0,*pointer;

    printf("Enter the number:\n");
    scanf("%d",&n);

    pointer = (int *)malloc(n*sizeof(int));

    if(pointer == NULL)
    {
        printf("The memory allocation failed\n");
        return 0;
    }

    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",pointer);
        sum = sum + *pointer;
        *(pointer+i);
    }
    printf("The sum is %d\n",sum);
    return 0;
}