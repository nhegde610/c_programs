#include<stdio.h>
#include<string.h>
int main(){
    char str1[100],str2[100];

    printf("Enter the first string:\n");
    scanf("%s",str1);

    printf("Enter the second string:\n");
    scanf("%s",str2);

    if(strcmp(str1,str2)== 0){
        printf("The strings are equal\n");
    }
    else
        printf("The strings are not equal\n");
    
    return 0;
}