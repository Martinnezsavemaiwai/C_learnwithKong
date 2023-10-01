 //! if else  ลดรูป
#include<stdio.h>
int main(){
    char grade;
    int score;
    printf("Enter you score:");
    scanf("%d",&score);
    grade = (score>=50) ? 'A':'F';
    printf("Result: %c\n",grade);
    return 0;
}