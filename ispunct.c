#include<stdio.h>
#include<ctype.h>
int main(){
    char s;
    printf("Enter the character:\n");
    scanf("%c",&s);

    if(ispunct(s))
        printf("The character is a special character\n");
    else
        printf("The character is not a special character\n");
    
    return 0;
}