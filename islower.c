#include<stdio.h>
#include<ctype.h>
int main(){
    char s;
    printf("Enter the character:\n");
    scanf("%c",&s);

    if(islower(s))
        printf("The character is a lowercase\n");
    else
        printf("The character is not a lowercase\n");
    
    return 0;
}