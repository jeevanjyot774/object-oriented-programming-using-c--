#include<stdio.h>

void increment(int *p)
{
    (*p)++;
}
int main(){
    int x = 5;
    printf("Before increment: x = %d\n", x);
    increment(&x);
    printf("After increment: x = %d\n", x);
    return 0;
}