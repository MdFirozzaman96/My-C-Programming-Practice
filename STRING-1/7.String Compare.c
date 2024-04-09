#include<stdio.h>
int String_Length(char ch[])
{
    int i;
    for(i=0;ch[i]!='\0';i++)
    {

    }
    return i;
}
int String_Compare(char ch1[],char ch2[])
{

    int i;

    if(String_Length(ch1)>String_Length(ch2))
    {
        return 1;
    }
    else if(String_Length(ch1)<String_Length(ch2))
    {
        return -1;
    }
    else if(String_Length(ch1)==String_Length(ch2))
    {
        for(i=0;ch1[i]!='\0' && ch2[i]!='\0';i++)
        {
            if(ch1[i]==ch2[i])
            {
                continue;
            }
            else if(ch1[i]>ch2[i])
            {
                return 1;
            }
            else if(ch1[i]<ch2[i])
            {
                return -1;
            }
            else if(ch1[i+1]=='\0'&&ch2[i+1]=='\0' && ch1==ch2)
            {
                return 0;
            }
        }

    }


}
int main()
{
    int Strlen1,Strlen2,ComValue;
    char Ch1[50],Ch2[50];

    printf("Enter the first string : \n");
    gets(Ch1);
    Strlen1=String_Length(Ch1);
    printf("Given the length of the first string is : %d\n",Strlen1);

    printf("\nEnter the second string : \n");
    gets(Ch2);
    Strlen2=String_Length(Ch2);
    printf("Given the length of the second string is : %d\n",Strlen2);

    ComValue=String_Compare(Ch1,Ch2);
    if(ComValue==1)
    {
        printf("\nFirst string is greater than second string.\n");
    }
    else if(ComValue==-1)
    {
        printf("\nFirst string is less than second string.\n");
    }
    else if(ComValue==0)
    {
        printf("\nBoth string are equal.\n");
    }
    return 0;
}
