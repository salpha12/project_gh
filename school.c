#include <stdio.h>
#include <stdlib.h>
#include "school.h"
#include "utils.h"
//-----------------------------------------------------------------------------

void school_init(school_t * school)
{
    utils_get_int_info("Enter the Number of Students at the School: ",
                       &school->student_count);

    school->students = (student_t *)malloc(school->student_count *
                                           sizeof(student_t));
}
//-----------------------------------------------------------------------------

void school_get_data(school_t * school)
{
    for(int i = 0; i < school->student_count; i++)
    {
        printf("\nEnter Student #%d Details: ",i+1);
        student_read_details(&school->students[i]);
    }
}
//-----------------------------------------------------------------------------

void school_print_data(school_t * school)
{
    for(int i = 0; i < school->student_count; i++)
    {
        student_print_details(&school->students[i]);
        printf("\n\n");
    }
}
//-----------------------------------------------------------------------------

void school_free(school_t * school)
{
    for(int i = 0; i < school->student_count; i++)
    {
        student_free(&school->students[i]);
    }
}
//-----------------------------------------------------------------------------
