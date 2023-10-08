#include<stdio.h>
#include<string.h>
typedef struct{
    char name[20];
    char gender;
    int age;
}Employee; //?เพิ่มความกระชับ
void showdata(Employee person);

int main(void) {
    Employee emp1;
    strcpy(emp1.name,"Martin Panchensri");
    emp1.gender='M';
    emp1.age = 19;
    showdata(emp1);

    
    Employee emp2;
    strcpy(emp2.name,"Bobby Walking");
    emp2.gender='F';
    emp2.age = 23;
    showdata(emp2);

    Employee emp3;
    strcpy(emp3.name,"Nakano Nino");
    emp3.gender='F';
    emp3.age = 16;
    showdata(emp3);
}
void showdata(Employee person) {
    printf("Name = %s\n",person.name);
    printf("Gender = %c\n",person.gender);
    printf("Age = %d\n",person.age);
    printf("-------------------\n");
}

