#include<stdio.h>
int main(void) {
    char name[20];
    printf("Enter our name:");
    gets(name);
    printf("Your name is ");
    puts(name);
}