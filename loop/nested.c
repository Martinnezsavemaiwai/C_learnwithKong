#include<stdio.h>
int main(void) {
    for(int i=1;i<=3;i++) {
        printf("Outside(i) = %d\n",i);
        for(int j = 1;j<=5;j++) {
            printf("Inside(j) = %d\n",j);
        }
        printf("\n");
    }
    return 0;
}