#include<stdio.h>
int num1,num2;
int main(){
    printf("enter the first number:");
    scanf("%d",&num1);
    printf("enter the second number:");
    scanf("%d",&num2);

    if(num1==num2)
        printf("Both the numbers are equal\n");
    else
    {
            if(num1> num2)
                printf("First number is largest\n");
            else
            {
                    printf("Second number is largest\n");
            }
            
    }
    return 0;
}
