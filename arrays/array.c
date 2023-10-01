#include<stdio.h>
int main(void){
    int score[] = {100, 90, 80, 70, 60}; //?Index = size -1
    score[1] = 99; //! Change data
    printf("<==Normal printf==>");
    printf("%d\n",score[0]);
    printf("%d\n",score[1]);
    printf("%d\n",score[2]);
    printf("%d\n",score[3]);
    printf("%d\n",score[4]);
    printf("<==Use for loop==>\n");
    for (int i = 0; i<5;i++) {
        printf("%d. %d\n",i+1,score[i]);
    }
}