#include<stdio.h>
int main(){
    int array[100],count,dup=0;
    printf("Enter the number of elements:");
    scanf("%d",&count);

    printf("Enter the elements in an array\n");
    for(int i=0;i<count;i++){
        scanf("%d",&array[i]);
    }

    for(int i=0;i<count;i++){
        for(int j=i+1;j<count-dup;j++){
            if(array[i]==array[j]){
                dup++;
                for(int k=j;k<count-dup;k++){
                    array[j]= array[j+1];
                }
            }
        }
    }
    printf("duplicate elements are %d\n",dup);
    printf("Duplicate arrays are:\n");
    for(int i=0;i<count-dup;i++)
        printf("%d\n",array[i]);
    
    return 0;
}