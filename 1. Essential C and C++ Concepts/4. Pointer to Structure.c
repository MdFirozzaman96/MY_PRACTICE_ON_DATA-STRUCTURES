///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<stdio.h>
#include<stdlib.h>

struct Info
{
    char name[50];
    int id;
};

int main()
{
    struct Info *nf;
    printf("Enter the number of student : ");
    int n,i;
    scanf("%d",&n);
    nf=(struct Info)malloc(2*sizeof(struct Info));
    /// nf.name="Md.Firozzaman";
    /// *nf.name="Md.Firozzaman";
    /// *(nf).name="Md.Firozzaman";
    for(i=0;i<n;i++)
    {
        //nf[i]
    }


}
