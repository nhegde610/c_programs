#include<stdio.h>
int main(){
    int average[50]={0},count=0,sum=0;
    float faverage=0.0;
    printf("Enter the number of given numbers:");
    scanf("%d",&count);

    printf("Enter the numbers\n");
    for(int i=0; i<count;i++)
    {
        scanf("%d",&average[i]);
        sum = sum + average[i];     
    }
    printf("The numbers have been entered\n");
    printf("The sum is %d and the number of numbers is %d\n",sum,count);
    printf("The average is %f\n",((float)sum/(float)count));
    return 0;
}