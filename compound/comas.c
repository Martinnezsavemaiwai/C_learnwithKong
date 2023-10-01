#include<stdio.h>
int main(){
    int x  = 100, y = 50;
    printf("x += y:%d\n",x+=y);
    printf("x -= y:%d\n",x-=y);
    printf("x *= y:%d\n",x*=y);
    printf("x /= y:%d\n",x/=y);
    printf("x %= y:%d",x%=y);

}