#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//c99부터 bool타입 사용 가능
#include <stdbool.h>

# define MEMORY_ALLOC_FAILURE false
# define MEMORY_ALLOC_SUCCES true

typedef struct _student student;

struct _student {
    char *name;
    int age;
};

bool init_student(student *new, char *name, int age) {
    char *new_memory = (char *)malloc(sizeof(char)*(sizeof(name)+1));
    
    if (new_memory == NULL)
    {
        return MEMORY_ALLOC_FAILURE;
    } 

    strcpy(new_memory, name);
    new->name = new_memory;
    new->age = age;
        return MEMORY_ALLOC_SUCCES;
}

void print_student(student new) {
    printf("name : %s\n", new.name);
    printf("name : %d\n", new.age);
}

void free_student(student *new) {
    free(new->name);
}

int main() {
    student s1;

    if(init_student(&s1, "insu", 24) == MEMORY_ALLOC_FAILURE) {
        printf("메모리 동적 할당 실패!\n");
        exit(-1);
    }

    print_student(s1);

    free_student(&s1);
    return 0;
}