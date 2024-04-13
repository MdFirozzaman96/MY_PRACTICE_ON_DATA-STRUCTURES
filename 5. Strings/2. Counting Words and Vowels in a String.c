///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<stdio.h>

int v,c,w;

void VCW(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            v+=1;
        }
        else if(str[i]>=65&&str[i]<=90||str[i]>=97&&str[i]<=122)
        {
            c+=1;
        }
        else if(str[i]==' '&&str[i-1]!=' ')
        {
            w+=1;
        }
        i+=1;
    }
}
int main()
{
    char str[100];
    printf("Enter a string : ");
    gets(str);
    v=0,c=0,w=1;
    VCW(str);
    printf("The total number of vowels,consonant and word of the input sentence are %d,%d and %d\n",v,c,w);
    return 0;
}
