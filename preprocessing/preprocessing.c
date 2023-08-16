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
    
}