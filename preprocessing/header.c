/**
 * A header file giving the func implementation for isPrime
*/

#include <math.h>

int isPrime(unsigned int num){
    if(num < 2){
        return 0;
    }
    if(num % 2 == 0){
        return num == 2;
    }
    double sqrtNum = sqrt((double) num);
    int i;
    for(i = 3; i <= sqrtNum; i+=2){
        if(num % i == 0) {
            return 0;
        }
    }
    return 1;
}