#include<stdio.h>
#include<string.h>
char *strrev(char *str)
{
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}
int main(){
    char str1[100],str2[100];

    printf("Enter the first string:\n");
    scanf("%s",str1);

    printf("Reversing the string\n");
    

    printf("The reversed string is %s\n",strrev(str1));
    return 0;
}