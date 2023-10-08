#include<stdio.h>
int main(){
    int score[2][3] = {
        {50,60,89},
        {38,44,56}
    }; //!row x column = element
    int total;
    float sum;
for (int row = 0; row < 2; row++){
    printf("Row %d:\n",row);
    for(int col = 0; col < 3 ;col++) {
        printf("column:%d\n",score[row][col]);
        total += score[row][col];
        sum = total/6;
    }
}
printf("Total score: %d\n",total);
printf("sum score: %.2f",sum);

    return 0;
}