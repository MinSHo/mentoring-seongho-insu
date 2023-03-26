#include <stdio.h>

char *get_student_name (void)
{
    char student_name[50] = "DongMin";

    return student_name;
}

int main (void)
{
    char *someone_name = get_student_name();

    printf("student name: %s\n", someone_name);

    return 0;
}