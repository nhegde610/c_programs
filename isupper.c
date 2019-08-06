#include<stdio.h>
#include<ctype.h>
int main(){
    char s;
    printf("Enter the character:\n");
    scanf("%c",&s);

    if(isupper(s))
        printf("The character is a uppercase\n");
    else
        printf("The character is not a uppercase\n");
    
    return 0;
}