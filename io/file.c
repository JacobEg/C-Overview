/**
 * Demonstrating file IO in C
*/

#include <stdio.h>
#include <string.h>

void addFromFile(){
    puts("Adding from file!");
    FILE* f = fopen("math.txt", "r");
    int currNum;
    int sum = 0;
    while(fscanf(f, "%d", &currNum) != EOF){
        sum += currNum;
    }
    printf("The sum of the file is %d\n", sum);
    puts("----------");
    fclose(f);
}

void dumpFile(){
    FILE* f = fopen("ipsum.txt", "r");
    puts("Dump file");
    char line[256];
    while(fgets(line, sizeof(line), f)){
        printf("%s", line);
    }
    puts("\n-------");
    fclose(f);
}

void writeFile(){
    puts("Writing File");
    FILE* f = fopen("to_write.txt", "w");
    char line[256];
    while(gets(line)){
        fprintf(f, "%s\n", line);
    }
    fputs("All done writing the file!", f);
    puts("---------");
    fclose(f);
}

int main(){
    dumpFile();
    rename("to_rename.txt", "new_name.txt");
    puts("Renamed file!\n-----------");
    remove("to_remove.txt");
    puts("Removed File!\n--------");
    writeFile();
    addFromFile();
}