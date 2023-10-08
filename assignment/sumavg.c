#include<stdio.h>
int main() {
    int count;
    printf("Input count:");
    scanf("%d",&count);
    int num[count];
    float sum,avg;
    for (int i = 0; i<count;i++) {
        printf("Enter number%d:",i+1);
        scanf("%d",&num[i]);
    }
    for (int j = 0;j<count;j++) {
        sum += num[j];
    }
    avg = sum/count;
    printf("Total number = %.2f\n",sum);
    printf("Average = %.2f",avg);
    
    return 0;
}