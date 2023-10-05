#include<stdio.h>
int main(void) {
    int num, total = 0;
    while (1) {
        printf("Enter your number(%d):",num);
        scanf("%d",&num);
        if (num<=0) {
            printf("Stop that not right my bro!!!");
            break;
        }
        total += num;
    }
    printf("Result = %d",total);
}