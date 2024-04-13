///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<iostream>
#define white 1
#define green 2
#define black 3

using namespace std;

int main()
{
    /*int graph[100][100],row,column;
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
    }*/
    int edge;
    cin>>edge;
    int color[edge+1]={black};
    printf("COLOR : \n");
    for(int i=0;i<=edge+1;i++)
    {
        cout<<color[i]<<" ";
    }
    return 0;
}

