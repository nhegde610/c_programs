#include<stdio.h>
int main(){
    char *pointer, string[50],addstring[50], *pointer1,*pointerString;

    printf("Enter the string:\n");
    scanf("%s",string);
    pointer = string;
    pointerString = string;
        
    printf("Enter the string to add:\n");
    scanf("%s",addstring);
    
    while(*pointer != '\0')
        pointer++;
    
    pointer1 = addstring;
    
    while(*pointer1 != '\0'){
        *pointer = *pointer1;
        pointer++;
        pointer1++;
        
    }

    printf("The concatedstring is %s\n",pointerString);

    return 0;
}