#include<stdio.h>

int strlength(char *s)
{
    int length = 0;
    while(*s != '\0') {
        length++;
        s++;
    }
    return length;
}
int main(){
    char str[] = "Hello, World!";
    int l = strlength(str);
    printf("Length of the string: %d\n", l);
    return 0;
}