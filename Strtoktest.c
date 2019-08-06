#include<stdio.h>
#include<string.h>
int main(){
    char p[100];
    char* tok;
    printf("Enter a string:");
    fgets(p,sizeof p,stdin);

    tok = strtok(p," ");
    while(tok!= NULL){
        printf("\n%s",tok);
        printf("The value of comparision with %s is %d\n",tok,strcmp(tok,"bye"));
        tok = strtok(NULL," ");
        
    }

    
    return 0;
}