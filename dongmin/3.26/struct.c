#include <stdio.h>
#include <stdlib.h>

// C99부터 bool 타입 추가
#include <stdbool.h>
#include <string.h>

#define MEMORY_ALLOC_SUCCESS    true
#define MEMORY_ALLOC_FAILURE    false

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
        return MEMORY_ALLOC_FAILURE;
    }

    strcpy(new_memory, name);
    st->name = new_memory;

    st->age = age;

    return MEMORY_ALLOC_SUCCESS;
}

void print_student(student st)
{
    printf("name: %s\n", st.name);
    printf("age: %d\n", st.age);
}

void free_student(student *st)
{
    free(st->name);
}

int main(void)
{
    student dongmin;

    if (init_student(&dongmin, "DongMin", 24) == MEMORY_ALLOC_FAILURE)
    {
        printf("메모리 동적 할당 실패!\n");
        exit(-1);
    }

    print_student(dongmin);

    free_student(&dongmin);
    return 0;
}

// 여기까지가 프로그래밍 기초 중에 기초