#include <stdio.h>
#include <malloc.h>
void func(int *ptr) {
    int a = 5;
    ptr = &a;
}
int main() {
    int *ptr = NULL;
    ptr = (int *) malloc(sizeof(int));
    *ptr = 10;
    func(&ptr);
    printf("%d \n", *ptr);
}
