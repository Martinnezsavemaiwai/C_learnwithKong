#include<stdio.h>
int main(void){
    int service;
    printf("Input Service Number (1-3):");
    scanf("%d",&service);
    switch (service)
    {
    case 1:
    printf("Create Account\n");
        break;
    case 2:
        printf("Withdraw\n");
        break;
    case 3:
        printf("Deposit\n");
        break;
    default:
    printf("Invalid!!!\n");
    }
}