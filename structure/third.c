#include<stdio.h>
#include<string.h>
struct user
{
    char name[20];
    char gender;
    int age;
};

int main(void) {
    struct user emp1 = {"Martin Panchensri",'M',19};
    printf("Name = %s\n",emp1.name);
    printf("Gender = %c\n",emp1.gender);
    printf("Age = %d\n",emp1.age);

    printf("<<========>>\n");
    
    struct user emp2 = {"Coleay Asangeuy",'F',23};
    printf("Name = %s\n",emp2.name);
    printf("Gender = %c\n",emp2.gender);
    printf("Age = %d\n",emp2.age);
}