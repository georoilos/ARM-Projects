#include <stdio.h>
#include <malloc.h>
void func(int **ptr) {
    int a = 5;
    *ptr = &a;
}
int main() {
    int *ptr = NULL;
    ptr = (int *) malloc(sizeof(int));
    *ptr = 10;
    func(&ptr);   //actually a double pointer
    printf("%d \n", *ptr);
}
