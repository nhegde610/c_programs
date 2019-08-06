#include<stdio.h>
int main(){
    int *pointerA,*pointerB;
    float *pointerC;

    *pointerA=1;
    *pointerB=2;
    *pointerC=4;

    if(pointerA > pointerB)
        printf("PointerA is greater than pointerB\n");
    else
        printf("pointerB is greater than pointerA\n");
    
    if(pointerA > pointerC)
        printf("PointerA is greater than pointerC\n");
    else
        printf("pointerC is greater than pointerA\n");
    
    return 0;
} 