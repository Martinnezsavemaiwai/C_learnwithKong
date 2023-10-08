#include<stdio.h>
int main(void) {
    int number =10;
    int *p1 = &number;
    printf("Value = %d\n",number);
    printf("Address = %p\n",&number);
    printf("Pointer address = %p\n",p1);
    printf("Pointer value = %d\n",*p1);

    char letter = 'A';
    char *p2 = &letter;
    printf("Value = %d\n",letter);
    printf("Address = %p\n",&letter);
    printf("Pointer address = %p",p2);

}