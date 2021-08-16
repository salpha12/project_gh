#include <stdio.h>
#include <string.h>
#include "utils.h"
#include "constant.h"
//-----------------------------------------------------------------------------

void utils_get_int_info(const char * message, int * input_int)
{
    printf("%s",message);
    scanf("%d", input_int);
}
//-----------------------------------------------------------------------------

void utils_get_string_info(const char *message, char * input_string)
{
    printf("%s", message);
    fgets(input_string,MAX_INPUT_STRING_LENGTH,stdin);

    // handling of newline character \n
    input_string[ strlen(input_string)-1 ] = '\0';
}
//-----------------------------------------------------------------------------

void utils_print_line()
{
    printf("\n================================================================="
           "=============================================");
}
//-----------------------------------------------------------------------------
