#include<stdio.h>
int main(){
    int num1, num2;
    printf("Input number1:");
    scanf("%d",&num1);
    printf("Input number2:");
    scanf("%d",&num2);
    if (num1>num2){
        printf("Number1:%d \nNumber2:%d\n",num1,num2);
        printf("Numner1 > Number2!!");
    }
    else if(num1<num2){
        printf("Number1:%d \nNumber2:%d\n",num1,num2);
        printf("Numner1 < Number2!!");
    } 
    else {
        printf("Number1:%d \nNumber2:%d\n",num1,num2);
        printf("Numner1 = Number 2!!");
    }
    
    return 0;
}