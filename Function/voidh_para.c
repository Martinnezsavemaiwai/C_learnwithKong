#include<stdio.h>
void calculate(int, int);
void showname(char [], char []);
int main(void) {
    calculate(16,34);
    showname("Martin","Pan");
    showname("Kaboto","Jonathan");
    showname("Tsuna","Yoshi");
    return 0;
}
void showname(char fname[20], char lname[20]){
    printf("Hello , %s %s\n",fname,lname);
}
void calculate(int a , int b){
    printf("Total = %d\n",a+b);
}