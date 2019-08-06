#include<stdio.h>
#include<ctype.h>
int main(){
    char s[2];
    printf("Enter the character:\n");
    scanf("%s",s);

    if(isalnum(s))
        printf("The character is an alphanumberic\n");
    else
        printf("The character is not a alphanumberic\n");
    
    return 0;
}