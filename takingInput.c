#include <stdio.h>
int main(){
    int number;
    char string[20];
    printf("Enter the number:");
    scanf("%d",&number);
    printf("Enter a string(less than 15):");
    scanf("%s",string);
    printf("The input is %d and %s\n", number,string);
    return 0;
}