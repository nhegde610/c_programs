#include<stdio.h>
#include<ctype.h>
int main(){
    char s;
    printf("Enter the character:\n");
    scanf("%c",&s);

    if(isalpha(s))
        printf("The character is a alphabet\n");
    else
        printf("The character is not a alphabet\n");
    
    return 0;
}