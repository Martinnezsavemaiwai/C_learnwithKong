#include<stdio.h>
int main(void){
    int score;
    printf("Enter your score:");
    scanf("%d",&score);
    if (score>=50) {
        printf("Score: %d point\n",score);
        printf("Pass Exam!!!");
    } else {
        printf("Score: %d point\n",score);
        printf("Not pass so sad T_T");
    }
}