#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MEMORY_ALLOC_SUCCESS true
#define MEMORY_ALLOC_FAULSE false

typedef struct _student student;

struct _student
{
    char *name;
    int age;
};

bool init_student(student *st, char *name, int age)
{
    char *new_memory = (char *)malloc(sizeof(char) * (strlen(name) + 1));

    if (new_memory == NULL)
    {
        return MEMORY_ALLOC_FAULSE;
    }

    strcpy(new_memory, name);
    st->name = new_memory;

    st->age = age;

    return MEMORY_ALLOC_SUCCESS;
}

void print_student(student st)
{
    printf("name : %s\n", st.name);
    printf("age : %d\n", st.age);
}

void free_student(student *st)
{
    free(st->name);
}

int main()
{
    student seongho;

    if (init_student(&seongho, "Seongho", 24) == MEMORY_ALLOC_FAULSE)
    {
        printf("MEMORY ALLOC FAILURE\n");
        exit(-1);
    } 

    print_student(seongho);

    free_student(&seongho);
    return 0;
}