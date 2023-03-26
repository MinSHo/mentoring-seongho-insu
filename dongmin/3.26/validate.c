#include <stdio.h>

#define MEMORY_VALIDATE_SUCCESS 1
#define MEMORY_VALIDATE_FAILURE 0

// 숫자를 적어놓는 대신에 #define 매크로 상수나
// enum 열거형을 사용하여 직관성을 높일 수 있습니다

// enum MEMORY_VALIDATE_STATUS
// {
//     SUCCESS,
//     FAILURE
// };

int memory_validate(void)
{
    // ...
    // ...
    // ...
    // if ()
    // 메모리 검증 결과가 성공이면
    return MEMORY_VALIDATE_SUCCESS;

    // else if ()
    // 메모리 검증 결과가 실패이면
    return MEMORY_VALIDATE_FAILURE;
}

int main(void)
{
    int result_validation = memory_validate();

    if (result_validation == MEMORY_VALIDATE_SUCCESS)
    {
        printf("메모리 검증 성공");
    }
    else
    {
        printf("메모리 검증 실패");
    }

    return 0;
}