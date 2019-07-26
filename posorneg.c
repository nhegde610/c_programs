#include<stdio.h>
int main(){
    int num;
    printf("enter a number to determine if it is positive or negative:");
    scanf("%d",&num);
    if (num < 0)
        printf("The number is negative\n");
    else
    {
        printf("The number is positive\n");
    }
    return 0;
}