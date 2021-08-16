#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "course.h" //Error #4 updated

typedef struct
{
    char first_name[MAX_INPUT_STRING_LENGTH];
    char last_name[MAX_INPUT_STRING_LENGTH];
    char mobile_num[MAX_INPUT_STRING_LENGTH];
    char Email[MAX_INPUT_STRING_LENGTH];
    int st_courses;
    course_t * cs;
}student_t;

void ReadStudentDetails(student_t *s1);
void PrintStudentDetails(student_t *s1);

#endif // __STUDENT_H_
