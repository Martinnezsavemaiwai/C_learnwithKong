#include<stdio.h>
int main(void) {
    int start,end;
    printf("Input Start = ");
    scanf("%d",&start);
    printf("Input End = ");
    scanf("%d",&end);

    for(int i=start;i<=end;i++) {
        printf("---Table%d---\n",i);
        for(int j = 1; j<= 12; j++) {
            printf("%d x %d = %d\n",i,j,i*j);
        }
    }
}