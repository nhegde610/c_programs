#include<stdio.h>
int main()
{
    int num=0,chknum=0,temp=0,armsum=0;
    printf("Enter a number:");
    scanf("%d",&num);
    chknum = num;
    while(num)
    {
        temp = num % 10;
        armsum = armsum + temp*temp*temp;
        num = num/10; 
    }
    printf("%d\n",armsum);
    if(armsum == chknum)
        printf("The number is armstrong number\n");
    else
    {   
        printf("The number is not a armstrong number\n");            
    }
    return 0;    
}