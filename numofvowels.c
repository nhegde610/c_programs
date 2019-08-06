#include<stdio.h>
#include<string.h>
int main(){
    char string[100];
    int i=0,vowels;
    printf("Enter the string:\n");
    scanf("%s",string);

    while(string[i] != '\0'){
        if(string[i]== 'a' || string[i]=='i'|| string[i] == 'e' || string[i] == 'o' || string[i]== 'u')
            vowels++;
        i++;
    }

    printf("The number of vowels in the string is %d\n",vowels);
    return 0;
}