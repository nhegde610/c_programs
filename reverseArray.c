#include<stdio.h>
int main(){
    int num[40]={0},count,count1,index,temp,i=0,j=0;

    printf("Enter the number of numbers:");
    scanf("%d",&count);
    count1 = count;
    index = count/2;
    printf("Enter the numbers\n");

    while(count){
        scanf("%d",&num[i]);
        i++;
        count--;
    }
    printf("the count is %d\n and i is %d\n",count,i);
    printf("Reversed Array\n");

    while(index){
        i--;
        temp = num[count];
        num[count] = num[i];
        num[i] = temp;
        printf("The temp is %d and the num[%d] is %d and the num[%d] is %d\n",temp,count,num[count],i,num[i]);
        count++;
        index--;
    }
    
    while(count1){
        printf("%d\n",num[j]);
        j++;
        count1--;
    }

}