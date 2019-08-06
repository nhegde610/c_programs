#include<stdio.h>
int main(){
    int num=0,factor=0,i;
    printf("Enter the number:");
    scanf("%d",&num);

    for(i=1;i<num;i++)
    {
        if(num%i==0)
            printf("%d\t",i);
    }
    printf("\n");
    return 0;
}