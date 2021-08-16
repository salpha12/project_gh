#include <stdio.h>
#include <stdlib.h>
#include "school.h"
//-----------------------------------------------------------------------------

int main()
{
    school_t school;
    school_init(&school);
    school_get_data(&school);
    school_print_data(&school);
    school_free(&school);

    return 0;
}
//-----------------------------------------------------------------------------
