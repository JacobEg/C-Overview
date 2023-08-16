/**
 * File for demonstrating C types in vars and funcs
*/

#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

int isIntegral(int integral, double doubleVal){
    return doubleVal >= integral && doubleVal < integral + 1;
}

int main(){
    puts("C type info");
    // integer types
    puts("------------------\nchar");
    printf("Size of char: %lu\n", sizeof(char));
    printf("char min: %d\n", CHAR_MIN);
    printf("char max: %d\n", CHAR_MAX);
    printf("unsigned char max: %d\n", UCHAR_MAX);
    puts("------------------\nshort");
    printf("Size of short: %lu\n", sizeof(short));
    printf("short min: %d\n", SHRT_MIN);
    printf("short max: %d\n", SHRT_MAX);
    printf("unsigned short max: %d\n", USHRT_MAX);
    puts("------------------\nint");
    printf("Size of int: %lu\n", sizeof(int));
    printf("int min: %d\n", INT_MIN);
    printf("int max: %d\n", INT_MAX);
    printf("unsigned int max: %lu\n", UINT_MAX);
    puts("------------------\nlong");
    printf("Size of long: %lu\n", sizeof(long));
    printf("long min: %ld\n", LONG_MIN);
    printf("long max: %ld\n", LONG_MAX);
    printf("unsigned long max: %lu\n", ULONG_MAX);
    puts("------------------\nlong long");
    printf("Size of long long: %lu\n", sizeof(long long));
    printf("long min: %lld\n", LLONG_MIN);
    printf("long max: %lld\n", LLONG_MAX);
    printf("unsigned long max: %llu\n", ULLONG_MAX);
    puts("------------------\nbool (just a fancy int)");
    printf("True: %d (or any non-zero value)\n", true);
    printf("False: %d\n", false);
    puts("------------------\nboolean example");
    int integral = 4;
    double doubleVal = 4.567;
    printf("%d is the integral of %lf: %d\n",
    integral, doubleVal, isIntegral(integral,doubleVal));
    // floating point types
    puts("------------------\nfloat");
    printf("Size of float: %lu\n", sizeof(float));
    puts("float has 6-7 decimal digits of accuracy");
    puts("------------------\ndouble");
    printf("Size of double: %lu\n", sizeof(double));
    puts("double has 15 decimal digits of accuracy");
    puts("------------------\nlong double");
    printf("Size of double: %lu\n", sizeof(long double));
    puts("long double has 19 decimal digits of accuracy");
    puts("------------------\nfloat innacuracy example");
    float num = 4.2222222222;
    printf("result = %lf", num * 2.0);
    puts("------------------\nchar (characters)");
    char c = 'a';
    printf("c val (character): %c\n", c);
    printf("c val (int): %d\n", c);
    return 0;
}