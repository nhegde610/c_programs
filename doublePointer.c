#include<stdio.h>
int main(){
    int *p1,**p2,var;

    printf("enter the original value of var:\n");
    scanf("%d",&var);

    p1 = &var;
    p2 = &p1;

    printf("From var,the value is %d and its address is %x\n",var, &var);
    printf("From p1, the value of var is %d, the value in p1 is %x and the address of p1 is %x\n",*p1,p1,&p1);
    printf("From p2, the value of var is %d, the value in p1 is %x and the address of p2 is %x\n",**p2,*p2,&p2);
    return 0;
}