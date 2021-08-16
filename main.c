#include <stdio.h>
#include <stdlib.h> // Error #1 updated
#include "school.h"

int main()
{
    //initialize global variables
    school_t * school = school_init();

    //get student and course data
    school_get_data(school);

    //print school data
    school_print_data(school);

    return 0;
}
