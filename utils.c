#include <stdio.h>
#include "utils.h"
#include "constant.h"
//-----------------------------------------------------------------------------

int utils_get_int_info(const char * message)
{
    int num;
    printf("%s",message);
    scanf("%d", &num);
    return num;
}
//-----------------------------------------------------------------------------

void utils_get_string_info(const char *message, char *str)
{
    printf("%s", message);
    fgets(str,MAX_INPUT_STRING_LENGTH,stdin);
}
//-----------------------------------------------------------------------------
