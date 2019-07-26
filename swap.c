#include<stdio.h>
int main()
{
    int num1,num2;

    printf("Enter 2 numbers:");
    scanf("%d %d",&num1,&num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("The swaped numbers are number1 = %d & number2 = %d\n",num1,num2);

    return 0;
}