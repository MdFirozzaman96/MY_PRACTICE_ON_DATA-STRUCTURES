///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<stdio.h>

void Pass_by_Value(int x,int y)
{
    int tmp;
    tmp=x;
    x=y;
    y=tmp;
}
void Pass_by_Address(int *x,int *y)
{
    int tmp;
    tmp=*x;
    *x=*y;
    *y=tmp;
}
int main()
{
    int option,a,b;

    printf("Enter two integer number to swapping : ");
    scanf("%d%d",&a,&b);
    printf("\na = %d   b = %d\n",a,b);

    do
    {
        printf("\n1 for Pass/Call by Value.\n");
        printf("2 for Pass/Call by Address.\n");
        printf("3 for Pass/Call by Reference.\n");
        printf("\nEnter an option : ");
        scanf("%d",&option);

        switch(option)
        {
        case 1:
                printf("\n");
                printf("Two numbers before swapping : \na = %d\nb = %d\n",a,b);
                Pass_by_Value(a,b);
                printf("Two numbers after swapping : \na = %d\nb = %d\n",a,b);
                printf("\n");
                break;

        case 2:
                printf("\n");
                printf("Two numbers before swapping : \na = %d\nb = %d\n",a,b);
                Pass_by_Address(&a,&b);
                printf("Two numbers after swapping : \na = %d\nb = %d\n",a,b);
                printf("\n");
                break;

        default :
                printf("\nEnter a valid option.\n\n");
                break;

        }

    }while(option!=4);

}
