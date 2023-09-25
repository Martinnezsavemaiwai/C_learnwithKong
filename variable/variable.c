#include<stdio.h>
#include<stdbool.h> //? นำเข้าข้อมูล Variable bool type

int main() {
    char name[30] = "Martin",  gender = 'M';
    int age = 19;
    float gpa = 4.00;
    bool status = true;
    printf("Your name is %s.\n",name);
    printf("Your age: %d\n",age);
    printf("Your gender: %c.\n",gender);
    printf("our gpa: %.2f\n",gpa);
    printf("Status: %d",status);
}