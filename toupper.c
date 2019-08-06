#include<stdio.h>
#include<ctype.h>
int main(){
    char s[100],p[100];
    int j=0,i=0;
    printf("Enter the string to change to uppercase:\n");
    scanf("%s",s);

    while(s[j]!= '\0'){
        p[i] = toupper(s[j]);
        i++;j++;
    }
    printf("The string is %s\n",p);
    return 0;
}