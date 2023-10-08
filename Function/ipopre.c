#include<stdio.h>

void inputarray(int [], int);
int findMax(int [], int);
int findMin(int [], int);
int power(int, int);

int main(void) {
    int n;
    printf("Enter a array:");
    scanf("%d",&n);
    int arr[n];
    inputarray(arr,n);
    int max = findMax(arr,n);
    int min = findMin(arr,n);
    printf("Max = %d and Min = %d\n",max,min);
    int p = power(2,5);
    printf("Power = %d\n",p);
    
}
void inputarray(int arr[], int n){
    for(int i = 0;i<n;i++){
        printf("Enter number(%d):",i+1);
        scanf("%d",&arr[i]);
    }
}
int findMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
int findMin(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i > n; i++) {
        if (arr[i] > min) {
            min = arr[i];
        }
    }
    return min;
}
int power(int base, int x) {
    int num =1;
    for (int i = 1;i<=x;i++) {
        num = base*num;
    }
    return num;
}