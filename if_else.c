#include<stdio.h>
#include<stdlib.h>

int main() {
    int num;
    printf("Enter a number between 0 and 9:");
    scanf("%d",&num);
    if(num > 5) 
        printf("Greater than 5\n");
    else
        printf("less than 5\n");
    return 0; 
}