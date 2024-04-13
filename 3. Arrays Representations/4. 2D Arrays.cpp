///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int option,r,c,i,j;
    do
    {
        printf("\n~~~CREATION OF 2D ARRAYS~~~\n\n");
        printf("1 for first method\n");
        printf("2 for second method\n");
        printf("3 for third method\n");
        printf("Enter your option : ");
        scanf("%d",&option);
        if(option==1)
        {
            printf("Enter row and column number : ");
            scanf("%d%d",&r,&c);
            int arr[r][c];
            printf("Enter the elements of the 2D arrays : \n");
            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                {
                    scanf("%d",&arr[i][j]);
                }
            }
            printf("\n");
            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                {
                    printf("%d ",arr[i][j]);
                }
                printf("\n");
            }
        }
        else if(option==2)
        {
            printf("Enter row and column number : ");
            scanf("%d%d",&r,&c);
            int *arr[r];
            for(i=0;i<r;i++)
            {
                arr[i]=(int*)malloc(c*sizeof(int));
            }
            printf("Enter the elements of the 2D arrays : \n");
            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                {
                    scanf("%d",&arr[i][j]);
                }
            }
            printf("\n");
            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                {
                    printf("%d ",arr[i][j]);
                }
                printf("\n");
            }
        }
        else if(option==3)
        {
            int **arr;
            printf("Enter row and column number : ");
            scanf("%d%d",&r,&c);
            arr=(int**)malloc(r*sizeof(int));
            for(i=0;i<r;i++)
            {
                arr[i]=(int*)malloc(c*sizeof(int));
            }
            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                {
                    scanf("%d",&arr[i][j]);
                }
            }
            printf("\n");
            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                {
                    printf("%d ",arr[i][j]);
                }
                printf("\n");
            }
        }

    }while(option!=4);

    return 0;
}
