#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//define을 쓸때는 대문자로 작성함으로써  변수명과 혼동되는 상황을 막을 수 있다.
#define MAX_LENGTH 8

char *get_student_name (void)
{
    char *student_name = (char *)malloc(sizeof(char) * MAX_LENGTH);

    strcpy(student_name,"Dongmin");

    return student_name;
}

int main(void) {
    char *someone_name = get_student_name();

    printf("student name : %s\n", someone_name);

    free (someone_name);
    return 0;
}