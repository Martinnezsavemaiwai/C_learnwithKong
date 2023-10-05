#include<stdio.h>
int main(void) {
    int num, total = 0;
    for (int i =1; i<=5;i++) {
        printf("Input number(%d):",i);
        scanf("%d",&num);
        total += num;
    }
    printf("Result total 5 number = %d",total);
}