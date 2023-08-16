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
    int* valPtr = &val;
    puts("Test Pointers");
    printf("val: %d\n", val);
    printf("valPtr: %x\n", valPtr);
    storeInteger1(valPtr, 42);
    printf("new valPtr val: %d\n", *valPtr);
    puts("Store regular integer");
    int val2 = 77;
    printf("val2: %d\n", val2);
    storeInteger2(val2, 23);
    printf("new val2: %d\n", val2);
    return 0;
}