#include<stdio.h>

int sum(int a, int b){
    return a + b;
}
    
int main(){
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    int c = sum(x, y);
    printf("The sum of x and y will be: %d\n", c);
    return 0;
}