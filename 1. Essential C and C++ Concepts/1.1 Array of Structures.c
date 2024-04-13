///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<stdio.h>

struct student
{
    char* name;
    long long int id,cell_no;
    char* dept;
    float cgpa;
};

struct color
{
    /*char* red;
    char* blue;
    char* green;*/
    //char* red,blue,green;
    int a,b,c;
};

int main()
{
    struct student info[5];

    printf("        Student 1\n\n");
    info[0].name="Ali";
    info[0].id=100;
    info[0].dept="Mechanical Engineering";
    info[0].cgpa=3.45;
    info[0].cell_no=14100000009;
    printf("Name : %s\nId : %lld\nDepartment : %s\nCGPA : %0.2f\nCell_No : %lld\n",info[0].name,info[0].id,info[0].dept,info[0].cgpa,info[0].cell_no);

    printf("        Student 2\n\n");

    //struct color cl[3]={{"Red","Red","Red"},{"Red","Blue","Red"},{"Red","Green","Red"}};
    struct color cl[3]={ {1,2,3},{3,4,5},{6,7,8} };

