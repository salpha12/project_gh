#ifndef __SCHOOL_H_
#define __SCHOOL_H_

#include "student.h"

typedef struct
{
    student_t * students;
    int student_count;
}school_t;

void school_init(school_t * school);
void school_get_data(school_t * school);
void school_print_data(school_t * school);
void school_free(school_t * school);

#endif // __SCHOOL_H_
