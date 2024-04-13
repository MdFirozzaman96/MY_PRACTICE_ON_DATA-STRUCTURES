///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<stdio.h>

struct student
{
    char* name;
    long long int id,cell_no;
    char* dept;
    float cgpa;
};
int main()
{
    struct student info;
    info.name="Md.Firozzaman";
    info.id=180201130;
    info.dept="Computer Science & Engineering";
    info.cgpa=2.67;
    printf("Name : %s\nId : %lld\nDepartment : %s\nCGPA : %0.2f\n",info.name,info.id,info.dept,info.cgpa);
    return 0;
}
