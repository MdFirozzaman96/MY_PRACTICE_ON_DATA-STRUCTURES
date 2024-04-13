///***~~~`ALLAH IS OMNISCIENT`~~~***///

#include<stdio.h>
#define white 1
#define green 2
#define black 3

int row,column;

void Breadth_First_Search(int arr[][column])
{
    //for()
}
int main()
{
    int graph[100][100];
    printf("Enter the number of row and column : ");
    scanf("%d%d",&row,&column);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            graph[i][j]=0;
        }
    }
    int edge;
    printf("Enter the number of edge : ");
    scanf("%d",&edge);
    int u,v;
    printf("Enter edges : \n");
    for(int i=0;i<edge;i++)
    {
        scanf("%d%d",&u,&v);
        graph[u][v]=graph[v][u]=1;
    }
    printf("\nGRAPH : \n\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            printf("%d  ",graph[i][j]);
        }
        printf("\n");
    }
    int color[edge+1];
    for(int i=0;i<=edge+1;i++)
    {
        color[i]=white;
    }
    printf("COLOR : \n");
    for(int i=0;i<=edge+1;i++)
    {
        printf("%d ",color[i]);
    }

    Breadth_First_Search(graph);
    return 0;
}

/*
1 2
1 3
1 4
2 3
3 4
3 4
4 5
5 6
5 7
*/
