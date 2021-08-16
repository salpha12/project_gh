#include <stdio.h>
#include "student.h"
#include <stdlib.h>


//#3 read studnts data
void  ReadStudentDetails(student_t * s1)
{
    printf("\nEnter First Name: ");
    gets(s1->first_name);//dummy
    gets(s1->first_name);

    printf("Enter Last Name:");
    gets(s1->last_name);

    printf("Enter mobile No#: ");
    gets(s1->mobile_num);

    printf("Enter Email: ");
    scanf("%s", s1->Email);

    printf("Enter Number of Courses taken by the Student: ");
    scanf("%d",&(s1->st_courses));

    //Error #8 Updated "allocation of memory for the courses is done here"
    s1->cs = (course_t *) malloc(s1->st_courses * sizeof (course_t));
}


//#4 print students data
void PrintStudentDetails(student_t *s1)
{
    printf("\n======================================================================================");
    printf(
                "\nFull Name: %s %s \t Mobile No: %s \t Email: %s\t #of Courses: %d",
                s1->first_name, s1->last_name, s1->mobile_num, s1->Email,s1->st_courses
                );
    printf("\n======================================================================================");
}
