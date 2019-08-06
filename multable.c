#include<stdio.h>
int main(){
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);

    for(int i=0;i<11;i++)
    {
        printf("%d * %d = %d\n",num,i,i*num);
    }
    printf("\n");
    return 0;
}