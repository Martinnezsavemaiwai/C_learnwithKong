#include<stdio.h>

int findMax(int, int);
int power(int, int);

int main(void) {
    int mx = findMax(30,45);
    printf("Max = %d\n",mx);
    int p = power(2,5);
    printf("Power = %d\n",p);
    
}
int findMax(int a, int b) {
    int max;
    if (a>b) {
        max = a;
    }
    else {
        max = b;
    }
    return max;
}
int power(int base, int x) {
    int num =1;
    for (int i = 1;i<=x;i++) {
        num = base*num;
    }
    return num;
}