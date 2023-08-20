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
    /*puts("------------");
    double a = 2.0;
    double b = 3.0;
    printf("%lf^%lf = %lf", a, b, pow(a, b));*/
    return 0;
}