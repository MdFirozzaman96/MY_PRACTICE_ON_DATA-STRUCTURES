///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<stdio.h>

void Channing_Case(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]>=65&&str[i]<=90)
        {
            str[i]='a'+(str[i]-65);
        }
        else if(str[i]>=97&&str[i]<=122)
        {
            str[i]='A'+(str[i]-97);
        }
        i+=1;
    }
}
int main()
{
    char str[100];
    printf("Enter a string : ");
    gets(str);
    Channing_Case(str);
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        printf("%c",str[i]);
    }
    printf("\n");
    return 0;
}
