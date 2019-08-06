#include<stdio.h>
#include<ctype.h>
int main(){
    char s[2];
    printf("Enter the character:\n");
    scanf("%s",s);

    if(isspace(s))
        printf("The character is a space\n");
    else
        printf("The character is not a space\n");
    
    return 0;
}