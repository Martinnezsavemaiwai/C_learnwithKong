#include<stdio.h>

int main(void) {
    int num1, num2;
    printf("Enter number1/number2:");
    scanf("%d/%d",&num1,&num2);
    printf("==========><==========\n");
    printf("%d + %d = %d\n",num1,num2,num1+num2);
    printf("%d - %d = %d\n",num1,num2,num1-num2);
    printf("%d / %d = %d\n",num1,num2,num1/num2);
    printf("%d mod %d = %d\n",num1,num2,num1%num2);
}
