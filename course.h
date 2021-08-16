/**
 * @file course.h
 * @author Sameer Alfahmi
 * @brief 
 * @version 0.1
 * @date 2021-08-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

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


void ReadCourseDetails(course_t * cs);
void PrintCourseDetails(course_t * cs);
int get_int_info(char statement[50]);
void get_char_info(char statement[50], char str[25]);


void course_read_details(course_t * course);
void course_print_details(course_t * course);

#endif //__COURSE_H__
