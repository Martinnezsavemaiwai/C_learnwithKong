#include<stdio.h>
int main(void) {
    int count = 1;
    while (count<=3) { //!Using while loop (I do not know round!)
        printf("%d. Hello loser Hahaha!!!\n",count);
        count++;
    }
    for (int i = 10;i>=1;i--) { //? Using for loop
        printf("%d.Nino say baka!\n",i);
        if (i == 5) {
            printf("Stop right now!\n");
            break; //? Using Break (Stop right now!)
        }
    }
    for (int k = 1;k<=5;k++) {
        if (k == 3) {
            printf("Pass right now!\n");
            continue;; //? Using Continue (pass right now!)
        }
        printf("%d.WTF!\n",k);
    }
    int j = 1;
    do {
        printf("Martinnez siad I so handsome boy %d times!\n",j);
        j++;
    }
    while (j<=10);
    printf("Eng Program");
}