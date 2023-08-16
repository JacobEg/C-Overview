/**
 * Demonstrating strings and arrays in C
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void testStr(int argc, char** argv){
    printf("number of command-line input items %d\n", argc);
    if(argc == 1){
        exit(1);
    }
    puts("command-line input");
    int i;
    for(i = 0; i < argc; i++){
        printf("%s\n", argv[i]);
    }
    puts("string operations");
    char* str = malloc(sizeof(char) * strlen(argv[1]));
    if(str == NULL){
        puts("Out of memory");
        exit(-1);
    }
    strcpy(str, argv[1]);
    puts("strlen & strcpy");
    printf("%s\n", str);
    if(argc >= 3){
        puts("strcmp");
        printf("strcmp(argv[1], argv[2]) = %d\n", strcmp(argv[1], argv[2]));
    }
    printf("iterating over string \"%s\"\n", argv[1]);
    i = 0;
    while(argv[1][i] != '\0'){ // null terminator
        printf("'%c' = %d\n", argv[1][i], argv[1][i]);
        i++;
    }
    puts("strcat");
    char* concatenated = calloc(strlen(argv[1]) + 5, sizeof(char));
    strcpy(concatenated, argv[1]);
    strcat(concatenated, "TEST");
    printf("\"%s\" + \"TEST\" = \"%s\"\n", argv[1], concatenated);
    puts("---------------");
    free(str);
    free(concatenated);
}

void testArrs(){
    puts("Test arrays");
    int numInnerArrs = 2;
    int lenInnerArrs = 3;
    // this way stores arr on stack, not heap
    int matrix[2][3] = {{1, 4, 2}, {3, 6, 8}};
    printf("matrix: %x\n", matrix);
    // this way allocates the arrays in memory
    int** arr2d = malloc(numInnerArrs * sizeof(int*));
    int* arr2d0 = malloc(lenInnerArrs * sizeof(int));
    int* arr2d1 = malloc(lenInnerArrs * sizeof(int));
    *arr2d = arr2d0; // == arr2d[0] = arr2d0
    *(arr2d+1) = arr2d1; // arr2d[1] = arr2d1
    for(int i = 0; i < lenInnerArrs; i++){
        arr2d0[i] = rand() % 10; // == *(arr2d0+i)
        arr2d1[i] = rand() % 10; // == *(arr2d1+i)
    }
    for(int i = 0; i < numInnerArrs; i++){
        for(int j = 0; j < lenInnerArrs; j++){
            printf("arr2d[%d][%d] = %d\n", i, j, arr2d[i][j]);
        }
    }
    free(arr2d0);
    free(arr2d1);
    free(arr2d);
    //free(matrix);
}

int main(int argc, char** argv){
    testStr(argc, argv);
    testArrs();
    return 0;
}