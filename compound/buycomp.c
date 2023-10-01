#include<stdio.h>
int main(void){
    int total = 0, com_price = 10000, x = 3, mouse_price = 450;
    printf("Before:%d\n",com_price);
    total += com_price;
    total *= x;
    printf("Total:%d\n",total);
    total += mouse_price;
    printf("Really total:%d",total);
    return 0;
}