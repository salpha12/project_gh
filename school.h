#ifndef __SCHOOL_H_
#define __SCHOOL_H_

#include "student.h" //Error #4 updated

typedef struct
{
    student_t * s1;
    int student_count;
    //warning about total_courses updated
}school_t;

school_t * school_init();
void  school_get_data(school_t * school);
void school_print_data(school_t * school);

#endif // __SCHOOL_H_
