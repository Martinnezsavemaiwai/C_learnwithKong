#include<stdio.h>
#include<string.h>
typedef struct{
    char name[20];
    char gender;
    int age;
}Employee; //?เพิ่มความกระชับ

int main(void) {
    Employee emp1;
    strcpy(emp1.name,"Martin Panchensri");
    emp1.gender='M';
    emp1.age = 19;

    printf("Name = %s\n",emp1.name);
    printf("Gender = %c\n",emp1.gender);
    printf("Age = %d\n",emp1.age);

    printf("<<========>>\n");
    
    Employee emp2;
    strcpy(emp2.name,"Coleay Asangeuy");
    emp2.gender='F';
    emp2.age = 23;

    printf("Name = %s\n",emp2.name);
    printf("Gender = %c\n",emp2.gender);
    printf("Age = %d\n",emp2.age);
}