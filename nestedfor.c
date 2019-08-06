#include<stdio.h>
int main()
{
    int num,i,j;
    printf("The numbers multiplication table of the given number\n");
    printf("Enter the number:");
    scanf("%d",&num);

    for(i=num;i>=1;i--)
    {
        for(j=1;j<=num;j++)
        {
            printf("%d * %d = %d \t",i,j,i*j);
        }
        printf("\n\n");
    }
    return 0;
}