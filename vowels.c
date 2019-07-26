#include<stdio.h>
int main(){
    char letters;
    printf("Print a character:");
    scanf("%c",&letters);

    if( letters == 'a' || letters == 'e' || letters ==  'i' || letters == 'o' || letters == 'u')
        printf("The given character is a vowel\n");
    else if (letters =='A' || letters == 'E' || letters == 'I' || letters == 'O' || letters == 'U')
        printf("The given character is a vowel\n");
    else    
        printf("The given character is a consonant\n");
    
    return 0;
}