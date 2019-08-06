#include<stdio.h>
int main(){

    int num=0,firstnum=1,secondnum=1,thirdnum=0,term=0;

    printf("enter the number upto which fibonacci numbers will be printed:");
    scanf("%d",&num);

    for(int i=1;i<=num;i++)
    {
        if(i==1){
            term = 1;
            printf("%d\t",term);
            continue;
        }
        if(i==2){ 
            term = 1;
            printf("%d\t",term);
            continue;
        }
        else 
            term = firstnum + secondnum;
            firstnum = secondnum;
            secondnum = term;
            printf("%d\t",term);
    }
    printf("\n");

    return 0;
}