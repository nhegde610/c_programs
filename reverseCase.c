#include<stdio.h>
int main(){
    char str;
    int ascnum;
    printf("Enter an alphabet to change its case:");
    scanf("%c",&str);
    ascnum = str;

    if( ascnum >= 97 && ascnum <= 122)
        ascnum = ascnum - 32;
    else if (ascnum >= 65 && ascnum <= 90)
        ascnum = ascnum + 32;
    else
    {
        printf("Incorrect character\n");
        printf("Please enter a correct character\n");
        return(1);
    }
    
    printf("The changed case is %c\n",ascnum);
return 0;
}