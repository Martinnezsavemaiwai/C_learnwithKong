#include<stdio.h>

int main(void) {
    char name[10], gender; /*Data*/
    int age;
    float gpa;
    //*input
    printf("Enter your name:");
    scanf("%s",&name);
    printf("Enter your age:");
    scanf("%d",&age);
    printf("Enter your gpa:");
    scanf("%f",&gpa);
    printf("Enter your gender:");
    scanf(" %c",&gender); //? space before %c because wait enter input value.
    
    //? output
    printf("Your name is %s\n",name);
    printf("Age: %d\n",age);
    printf("GPA: %.2f\n",gpa);
    printf("Gender: %c",gender);


    return (0);
}