#ifndef __COURSE_H__
#define __COURSE_H__

#include "constant.h"

typedef struct
{
    char course_name[MAX_INPUT_STRING_LENGTH];
    char instructor[MAX_INPUT_STRING_LENGTH];
    int course_grade;
    int course_credit;
}course_t;

void course_read_details(course_t * course);
void course_print_details(course_t * course);

#endif //__COURSE_H__
