#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "course.h" //Error #4 updated

typedef struct
{
    char first_name[MAX_INPUT_STRING_LENGTH];
    char last_name[MAX_INPUT_STRING_LENGTH];
    char mobile_num[MAX_INPUT_STRING_LENGTH];
    char Email[MAX_INPUT_STRING_LENGTH];
    int courses_count;
    course_t * cs;
}student_t;

void student_read_details(student_t * student);
void student_print_details(student_t * student);
void student_free(student_t * student);

#endif // __STUDENT_H_
