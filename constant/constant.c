#include<stdio.h>
#define AGE 19 //* Defined constant
int main(void) {
    const int battery_max = 100; //! Memory constant can not change value.
    printf("Name: %s\n","Martinnez"); //? Literal constant
    printf("Age: %d\n",AGE);
    printf("Batterry max: %d",battery_max);
    return (0);
}