#include<stdio.h>
int main(){
    char gender;
    int age;
    printf("Input gender(M/F):");
    scanf("%c",&gender);
    printf("Input age:");
    scanf("%d",&age);
    if(gender=='M' && age>=20) {
        printf("Pass!!!\n");
    }
    else {
        printf("Not Pass!\n");
    }
    return 0;
}