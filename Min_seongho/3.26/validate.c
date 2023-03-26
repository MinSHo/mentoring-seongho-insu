#include <stdio.h>

#define memory_validate_success 1
#define memory_validate_failure 0

int memory_validate()
{
    return memory_validate_success;

    return memory_validate_failure;
}

int main()
{
    int result_validation =  memory_validate();

    printf("memory check result : %d\n", result_validation);

    return 0;
}