#include<stdio.h>
#include<string.h>
int main(){
    char str1[100],str2[100];

    printf("Enter the first string:\n");
    scanf("%s",str1);

    printf("copying the first string to an another string\n");
    strcpy(str2,str1);

    printf("The second string is %s\n",str2);
    return 0;
}