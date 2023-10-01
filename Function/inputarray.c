#include <stdio.h>
void showArray(int [], int);  
int main(void)
{
    int score[5] = {100, 99, 88, 77, 66};
    showArray(score,5);
    int height[6] = {180, 156, 177, 167, 155, 161};
    showArray(height,6);
    int weight[5] = {56, 68, 79, 44, 52};
    showArray(weight,5);
    return 0;
}
void showArray(int arr[], int count){   
    printf("-----Data-----\n");
    for (int i = 0; i < count; i++){
        printf("Index %d = %d\n", i, arr[i]);
    }
}