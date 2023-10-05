#include<stdio.h>
int main(void) {
    int number;
    printf("Input number:");
    scanf("%d",&number);

    printf("-----Tabale %d-----\n",number);
    for (int i =1; i<=12;i++) {
        printf("%d x %d = %d\n",number,i,number*i);
    }
}