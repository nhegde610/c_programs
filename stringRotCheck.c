#include<stdio.h>
#include<string.h>
int main(){
    char string1[50],string2[50];
    int strlen1=0,strlen2=0,i=0,j=0,match=0;
    printf("Enter the first string:");
    scanf("%s",string1);
    printf("Enter the second string:");
    scanf("%s",string2);

    strlen1 = strlen(string1);
    strlen2 = strlen(string2);

    if(strlen1==strlen2)
    {   i=0;j=0;
        while(strlen1)
        {   
            for(i=0;i<=strlen2;i++){
                if(string1[i]==string2[j])
                {   match++;
                    printf("\n%d\t%d\t%d\t",i,j,match);
                    j++;
                    //printf("\n%d\t%d\t%d\t",i,j,match);
                }
                //if(i==(strlen2-1))
                //       i=0;
                
            }
            j=0;
            printf("\n\n");
            strlen1--;
        }
        if(match == strlen2)
            printf("\nThe Second string is a rotated string\n");
        else
        {
                printf("\nThe second string is not rotated string\n");
        }
            
    }
    else
    {
        printf("\nThe second string is not the roated version of the first string\n");
    }
    
    return 0;
}