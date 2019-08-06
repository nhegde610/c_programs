#include<stdio.h>
int main(){
    int array[100]={0},count=0,largest=0,smallest=0;

    printf("Enter the number of elements:\n");
    scanf("%d",&count);
    printf("Enter the numbers:\n");
    
    for(int i=0;i<count;i++){
        scanf("%d",&array[i]);
        }
        
        largest= array[0];
        smallest = array[0];

    for(int i=0;i<count;i++){    
        if(array[i]>largest)
            largest = array[i];
        
        if(smallest>array[i])
            smallest = array[i];
        
    }
    printf("largest number is %d and smallest is %d\n",largest,smallest);
    return 0;
}