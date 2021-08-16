#include <stdio.h>
#include "course.h"
#include <stdlib.h>
#include <string.h>

int get_int_info(char statement[50])
{
    int num;
    printf("%s",statement);
    scanf("%d", &num);
    return num;
}

void get_char_info(char cstatement[50], char str[25])
{
    printf("%s",cstatement);
    fgets(str,25,stdin);
}

//#1 Read Courses data
void ReadCourseDetails(course_t *cs)
{
    fgets(cs->course_name,2,stdin); //Dummy Operation
    get_char_info("\nEnter course Name: ", (char *)&cs->course_name);
    //handling of newline character \n
    cs->course_name[strlen(cs->course_name)-1]='\0';

    get_char_info("Enter The Instructor Name: ", (char *)&cs->instructor);
    //handling of newline character \n
    cs->instructor[strlen(cs->instructor)-1]='\0';

    cs->course_grade = get_int_info("Enter student grade: ");

    //Error-handling for course grade
    if(cs->course_grade < 0 || cs->course_grade > 100)
    {
        printf("Enterned Course grade is invalid! Please try again\n");
        cs->course_grade = get_int_info("Enter student grade: ");
    }
    cs->course_credit = get_int_info("Enter course credit hours (2,3,4): ");

    //Error-handling for course credit
    if(cs->course_credit != 2 && cs->course_credit != 3 && cs->course_credit != 4 )
    {
        printf("Enterned Course Credit is invalid! Please try again!\n");
        cs->course_credit = get_int_info("Enter course credit hours (2,3,4): ");

    }
    //return cs;
}

//#2 print courses data
void PrintCourseDetails(course_t * cs)
{
    printf("\nCourse: %s \t Instructor: %s \t Credits: %d hrs \t Grade: %d/100",
           cs->course_name, cs->instructor, cs->course_credit, cs->course_grade);
}