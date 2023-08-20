/**
 * Demonstrating function pointers in C
*/

#include <stdio.h>
#include <stdlib.h>

int testFun(int (*fun)(int, int), int a, int b){
    // fun(a, b)
    return (*fun)(a, b);
}

int add(int a, int b){
    return a + b;
}

int multiply(int a, int b){
    return a * b;
}


int main(){
    int* ptr1 = malloc(sizeof(int));
    int* ptr2 = malloc(sizeof(int));
    *ptr1 = 10;
    *ptr2 = 11;
    printf("malloc'd ptr1 at address %p\n", ptr1);
    printf("malloc'd ptr2 at address %p\n", ptr2);
    int num1 = 20;
    int num2 = 21;
    int *num1Ptr = &num1;
    int *num2Ptr = &num2;
    printf("stack pointer num1Ptr at address %p\n", num1Ptr);
    printf("stack pointer num2Ptr at address %p\n", num2Ptr);
    int (*addPtr)(int, int) = &add;
    int (*multiplyPtr)(int, int) = &multiply;
    printf("add function pointer at address %p\n", addPtr);
    printf("multiply function pointer at address %p\n", multiplyPtr);
    int x = 3;
    int y = 4;
    printf("add(%d, %d) = %d\n", x, y, testFun(addPtr, x, y));
    printf("multiply(%d, %d) = %d\n", x, y, testFun(multiplyPtr, x, y));
    free(ptr1);
    free(ptr2);
    return 0;
}