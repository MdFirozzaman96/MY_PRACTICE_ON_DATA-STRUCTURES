///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<stdio.h>

int Equality(char str1[],char str2[2])
{
    int i=0;
    while(str1[i]!='\0')
    {
        if(str1[i]!=str2[i]||str1[i+1]=='\0'&&str2[i+1]!='\0'||str2[i+1]=='\0'&&str1[i+1]!='\0')
        {
            return 0;
        }
        i+=1;
    }
    return 1;
}
int Compare(char str1[],char str2[])
{
    int i=0;
    while(str1[i]!='\0')
    {
        if(str1[i]<=90&&str2[i]<=90)
        {
            if(str2[i]<str1)
            {
                return 1;
            }
            else if(str)
        }
    }
}
int Plindrome(char str[])
{

}
int main()
{
    char str1[100],str2[100];
    int option;
    do
    {
        printf("1 for checking palindrome.\n");
        printf("2 for comparing between two string.\n\n");
        printf("Enter an option : ");
        scanf("%d",&option);
        switch(option)
        {

        case 1 :
                printf("Enter a string : ");
                gets(str1);
                break;

        case 2:
                printf("Enter first string : ");
                scanf("%s",str1);
                printf("Enter second string : ");
                scanf("%s",str2);
                if(Equality(str1,str2))
                {
                    printf("Two string are equal.\n");
                }
                else
                {
                    printf("Two string are not equal.\n");
                }
                break;

        default :
                printf("Enter a valid option.\n");

        }
    }while(option!=3);

}

/*

AbcdAAaa
AbcdAaaabcd

*/
