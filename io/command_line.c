/**
 * File for demonstrating C command-line IO
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void getLines(){
    int numLines = 0;
    int numWords = 0;
    char space[3] = " \n\t";
    char line[256];
    char* token;
    while(gets(line)){ // same as fgets(stdin, line)
        numLines++;
        token = strtok(line, space);
        while(token != NULL && strcmp(token, "") != 0){
            numWords++;
            token = strtok(NULL, space);
        }
    }
    printf("You inputted %d line(s) and %d word(s)\n", numLines, numWords);
}

void addNums(){
    int sum = 0;
    int currNum;
    while(scanf("%d", &currNum) != EOF){ // same as fscanf(stdin, "%d", &currNum)
        sum += currNum;
    }
    fprintf(stdout, "Sum of inputted nums is %d\n", sum);
}

int main(int argc, char** argv){
    if(argc != 2){
        fputs("Please provide exactly one command-line arg\n", stderr);
        return 1;
    }
    int mode = atoi(argv[1]);
    if(mode == 1){
        fputs("Getting lines from stdin\n", stdout);
        getLines();
    } else if(mode == 2){
        puts("Getting nums from stdin");
        addNums();
    } else{
        fputs("Command line arg must be either 1 or 2\n", stderr);
        return 2;
    }
    return 0;
}