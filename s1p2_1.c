#include<stdio.h>

int swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
     printf("After swap: a = %d, b = %d\n", a, b);
    return temp;
}
int main(){
    int x = 5, y = 10;
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(x, y);
    return 0;
}