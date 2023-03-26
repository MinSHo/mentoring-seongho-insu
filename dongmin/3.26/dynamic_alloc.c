#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRING_LENGTH  8

char *get_student_name (void)
{   
    // memory allocation
    char *student_name = (char *)malloc(sizeof(char) * MAX_STRING_LENGTH);

    strcpy(student_name, "DongMin");

    return student_name;
}

int main (void)
{
    char *someone_name = get_student_name();

    printf("student name: %s\n", someone_name);

    free(someone_name);
    return 0;
}