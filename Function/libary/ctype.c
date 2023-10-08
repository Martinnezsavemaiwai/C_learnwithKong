#include<stdio.h>
#include<ctype.h>
int main(){
    char letter='a', s = 'B';
    printf("Original:%c\n",letter);
    printf("Uppper:%c\n",toupper(letter));
    printf("Lower:%c\n",tolower(s));

    return 0;

}