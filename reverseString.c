#include<stdio.h>
#include<string.h>
int main(){
    char words[50],reversedword[50];
    int numofchar=0,i=0,j=0;
    printf("Enter a string to reverse\n");
    scanf("%s",words);
    numofchar = strlen(words);
     for(i = 0,j=numofchar-1; i<=numofchar;i++,j--)
    {
        reversedword[i] = words[j];
    }
    printf("The reversed string is %s\n",reversedword);
    
}