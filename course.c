#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "course.h"
#include "utils.h"
//-----------------------------------------------------------------------------

void course_read_details(course_t * course)
{
    fflush(stdin);

    utils_get_string_info("Enter course Name: ", course->course_name);
    utils_get_string_info("Enter The Instructor Name: ", course->instructor);

    // Get Grade and Handle Error of course grade
    course->course_grade = 0;
    while (course->course_grade <= 0 || course->course_grade > 100)
    {
        utils_get_int_info("Enter student grade: ",&course->course_grade);
    }

    // Get Credit and Handle Error of Credit
    course->course_credit = 0;
    while (course->course_credit < 2 || course->course_credit > 4)
    {
        utils_get_int_info("Enter course credit hours (2,3,4): ",
                           &course->course_credit);
    }
}
//-----------------------------------------------------------------------------

void course_print_details(course_t * course)
{
    printf("\nCourse: %s \t Instructor: %s \t Credits: %d hrs \t Grade: %d/100",
           course->course_name, course->instructor, course->course_credit,
           course->course_grade);
}
//-----------------------------------------------------------------------------
