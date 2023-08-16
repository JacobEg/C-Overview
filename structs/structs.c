/**
 * Demonstrating structs in C
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Person{
    char* name;
    int age;
} person;

typedef char byte;

void newName1(person p, char* name){
    p.name = name;
}

void newName2(person* p, char* name){
    p->name = name;
}

int main(){
    puts("Simple typedef");
    printf("Size of char = %d\n", sizeof(char));
    printf("Size of byte = %d\n", sizeof(byte));
    puts("----------------");
    person person1;
    person* person2 = malloc(sizeof(person));
    person1.name = "Bob";
    person1.age = 34;
    person2->name = "Mary";
    person2->age = 28;
    puts("Structs");
    printf("Size of person = %d\n", sizeof(person));
    printf("Size of person* = %d\n", sizeof(person*));
    newName1(person1, "Dave");
    newName2(person2, "Ann");
    printf("New name for person1: %s\n", person1.name);
    printf("New name for person2: %s\n", person2->name);
    return 0;
}