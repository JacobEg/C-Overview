/**
 * Demonstrates pointers in C
*/

#include <stdio.h>

void storeInteger1(int* toStore, int val){
    *toStore = val;
}

void storeInteger2(int toStore, int val){
    int* toStorePtr = &toStore;
    *toStorePtr = val;
}

int main(){
    int val = 10;
    int* valPtr = &val; // referencing val
    puts("Test Pointers");
    printf("Size of pointer: %lu\n", sizeof(int*));
    printf("val: %d\n", val);
    printf("valPtr: %p\n", valPtr);
    storeInteger1(valPtr, 42);
    printf("new valPtr value: %d\n", *valPtr); // dereferencing valPtr
    printf("new val value: %d\n", val);
    puts("Store regular integer");
    int val2 = 77;
    printf("val2: %d\n", val2);
    storeInteger2(val2, 23);
    printf("new val2: %d\n", val2);
    return 0;
}