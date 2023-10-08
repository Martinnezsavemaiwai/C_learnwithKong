#include<stdio.h>
void deposit(int);
void withdraw(int);
int getBalance();
int balance = 1000; //? Global variable
int main(void){
    deposit(500);
    withdraw(500);
    printf("Balance = %d\n",getBalance);
    return 0;
}
void deposit(int value) {
    if (value>0){
        balance+=value;    
    }
    else {
        printf("Error!!!\n");
    }
    
}
void withdraw(int amount) {
    if (balance>=amount){
        balance-=amount;    
    }
    printf("Error!!!\n");
    
}
int getBalance(){
    return balance;

}

