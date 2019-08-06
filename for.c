#include<stdio.h>
int main(){
    int num;
    printf("prints numbers from 1 to the limit given by user\n");
    printf("Enter a number:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
        printf("%d\t",i);
    
    printf("\n\n");
    return 0;
}