#include<stdio.h>
int main(void) {
    char confirm;
    printf("Do you know about me? (y/n):");
    confirm = getchar(); //! input value
    putchar(confirm); //?Show output
}