#include<stdio.h>
int main(){
    int a = 5, b = 3;
    printf("Value(a) = %d\n",a);
    printf("Prefix(++a) = %d\n",++a);
    printf("Postfix(a++) = %d\n",a++);
    printf("current(a) = %d\n",a);
    printf("<==Decrease value==>\n");
    printf("Value(b) = %d\n",b);
    printf("Prefix(--b) = %d\n",--b);
    printf("Postfix(b--) = %d\n",b--);
    printf("current(b) = %d\n",b);

}