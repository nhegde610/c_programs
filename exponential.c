#include<stdio.h>
int main(){
    int num,power,expo=1;
    printf("enter the number:");
    scanf("%d",&num);
    printf("Enter the power:");
    scanf("%d",&power);
    
    for(int i=0;i<power;i++)
    {   
        if(power==0)
        {    printf("The answer is 1\n");
            break;
        }
        expo = expo * num;
    }
    printf("The answer is %d\n",expo);
    return 0;
}