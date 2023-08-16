/**
 * Demonstrates preprocessing and header files
*/

#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main(int argc, char **argv){
    if(argc == 1){
        fprintf(stderr, "Please include at least 1 int!\n");
        return 1;
    }
    int i;
    for(i = 1; i < argc; i++){
        unsigned int num = atoi(argv[i]);
        printf("%d is prime: %d\n", num, isPrime(num));
    }
    return 0;
}