#include<stdio.h>
int main(){
    int num=0,i=0,count=0;

    printf("Enter the number of numbers to be checked:");
    scanf("%d",&count);

    for(;i<count;i++)
    {
        scanf("%d",&num);
        if(num%2==0)
            printf("Even\n");
        else
            printf("Odd\n");
    }
    printf("Finished!\n");
    return 0;
    
}