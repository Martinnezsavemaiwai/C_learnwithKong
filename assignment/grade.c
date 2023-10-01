#include<stdio.h>
int main(){
    int score;
    char grade;
    printf("Enter your score:");
    scanf("%d",&score);
    if (score>=80 && score<=100) {
        grade = 'A';
    }
    else if (score>70 && score<=79){
        grade = 'B';
    }
    else if (score>=60 && score<=59) {
        grade = 'C';
    }
    else if (score>=0 && score<=59) {
        grade = 'F';
    }
    else {
        grade = 'N';
    }
    printf("Result:%c",grade);
}