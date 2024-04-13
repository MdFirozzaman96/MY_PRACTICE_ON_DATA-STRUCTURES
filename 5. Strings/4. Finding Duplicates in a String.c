///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<stdio.h>

void Duplicates(char str[],int arr[])
{
    int i=0;
    while(str[i]!='\0')
    {
        arr[str[i]]+=1;
        i+=1;
    }
}
int main()
{
    char str[100];
    int arr[123]={0};
    printf("Enter a string : ");
    scanf("%s",str);
    Duplicates(str,arr);
    for(int i=65;i<123;i++)
    {
        if(arr[i]>1)
        {
            printf("%c = %d\n",i,arr[i]);
        }
    }
    return 0;
}
