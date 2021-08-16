#include <stdio.h>
#include <stdlib.h>
#include "student.h"
#include "utils.h"
//-----------------------------------------------------------------------------

void student_read_details(student_t *student)
{
    fflush(stdin);

    utils_get_string_info("\nEnter First Name: ", student->first_name);
    utils_get_string_info("Enter Last Name: ", student->last_name);
    utils_get_string_info("Enter mobile No#: ", student->mobile_num);
    utils_get_string_info("Enter Email: ", student->Email);

    // The student must have one course at least
    student->courses_count = 0;
    while (student->courses_count <= 0)
    {
        utils_get_int_info("Enter Number of Courses taken by the Student: ",
                           &student->courses_count);
    }

    student->cs = (course_t *) malloc(student->courses_count *
                                      sizeof (course_t));

    for (int index = 0; index < student->courses_count; ++index)
    {
        course_read_details(&student->cs[index]);
    }
}
//-----------------------------------------------------------------------------

void student_print_details(student_t * student)
{
    utils_print_line();

    printf("\nFull Name: %s %s \t Mobile No: %s \t Email: %s\t #of Courses: %d",
           student->first_name, student->last_name, student->mobile_num,
           student->Email,student->courses_count);

    utils_print_line();

    int total_points = 0;
    int total_credit = 0;

    for (int index = 0; index < student->courses_count; ++index)
    {
        course_t * temp = &student->cs[index];
        course_print_details(temp);
        total_points += temp->course_grade * temp->course_credit;
        total_credit += temp->course_credit;
    }

    float gpa = ((5.0 * total_points)/(total_credit*100));

    utils_print_line();
    printf("\nStudent's GPA = %0.3lf out of 5", gpa);
    utils_print_line();
}
//-----------------------------------------------------------------------------

void student_free(student_t * student)
{
    // free all courses dynamic memory of the student
    for (int index = 0; index < student->courses_count; ++index)
    {
        course_t * temp = &student->cs[index];
        free(temp);
    }

    // free the student dynamic memory
    free(student);
}
//-----------------------------------------------------------------------------
