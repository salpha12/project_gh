#include <stdio.h>
#include "school.h"//Error # 5 updated "other headers are included in shcool.h"
#include <stdlib.h>

school_t * school_init() //Error #2 updated
{

    school_t *school = (school_t *) malloc(sizeof (school_t));
    printf("Enter the Number of Students at the School: ");
    scanf("%d",&school->student_count);
    school->s1 = (student_t *) malloc(school->student_count * sizeof(student_t));

    return school;

}

void school_get_data(school_t * school) //Error #3 Updated
{
    //Error #7 updated "removed comment that was unnecessary"
    for(int i = 0;i<school->student_count;i++)
    {
        printf("\nEnter Student #%d Details: ",i+1);
        ReadStudentDetails(&school->s1[i]); //Error #9 updated
    }

    //Loop for reading courses info for each student
    for(int i = 0;i<school->student_count;i++)
    {
        for(int j = 0;j<((school->s1)+i)->st_courses;j++)
        {
            printf("\nEnter the Details of Course #%d for %s: ",j+1,((school->s1)+i)->first_name);
            ReadCourseDetails(&((&school->s1[i])->cs)[j]); //old code simplified similar to warning #5
        }
    }

}

void school_print_data(school_t * school)
{
    int total_points = 0U;
    int total_credit = 0L;
    double gpa = 0;
    int i,j;

    //loop for printing student info and their GPA
    for(i = 0;i<school->student_count;i++)
    {

        PrintStudentDetails((school->s1)+i);
        for(j = 0;j<((school->s1)+i)->st_courses;j++)
        {
            PrintCourseDetails((((school->s1)+i)->cs)+j);
            int grade = ((((school->s1)+i)->cs)+j)->course_grade;
            int credits = ((((school->s1)+i)->cs)+j)->course_credit;
            //Warning #5 updated "complex statement simplified"
            total_points += grade * credits;
            total_credit += credits;
        }

        gpa = ((5.0 * total_points)/(total_credit*100));

        printf("\n======================================================================================");
        printf("\nStudent's GPA = %0.3lf out of 5", gpa);
        printf("\n======================================================================================\n");
        total_points = 0;
        total_credit=0;
    }

    for(i = 0;i<school->student_count;i++)
    {
        free(((school->s1)+i)->cs);
    }

    for(i = 0;i<school->student_count;i++)
    {
        free(((school->s1)+i));
    }

    //free allocated Memory
    free(school);
    free(school->s1);

    for(i = 0;i<school->student_count;i++)
    {
        free(((school->s1)+i)->cs);
    }

}
