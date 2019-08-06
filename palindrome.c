#include<stdio.h>
#include<string.h>
int main(){
    char words[50];
    int numofwords,i,j;
    printf("Enter the string to determine if it is a palindrome or not\n");
    scanf("%s",words);
    numofwords = strlen(words);

    for(i = 0,j=numofwords-1; i<=numofwords,j>=i;i++,j--)
    {     
           if(words[i] == words[j])
                continue;
            else
            {
                    printf("Not a palindrome\n");
                    return 0;
            }    
    }
    printf("The word is a palindrome\n");   
    return 0;

}