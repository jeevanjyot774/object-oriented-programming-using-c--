#include<stdio.h>

int main(){
      char *arr[5] = {"A", "B", "C", "D", "E"};

    for(int i = 0; i < 5; i++) {
        printf("%s\n", arr[i]);
    }
    return 0;
}