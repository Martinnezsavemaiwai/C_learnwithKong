#include<stdio.h>
int getDiscount();
int main(void) {
    int price;
    printf("Enter Product Price:");
    scanf("%d",&price);
    int dis = getDiscount();
    printf("Total = %d",price-dis);
    return 0;
}
int getDiscount(){
    return 500;
}