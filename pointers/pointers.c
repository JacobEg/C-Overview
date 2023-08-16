/**
 * Demonstrates pointers in C
*/

#include <stdio.h>

void storeInteger(int* toStore, int val){
    *toStore = val;
}

int main(){
    int val = 10;
    int* valPtr = &val;
    printf("val: %d\n", val);
    printf("valPtr: %x\n", valPtr);
    storeInteger(valPtr, 42);
    printf("new valPtr val: %d\n", *valPtr);
    return 0;
}