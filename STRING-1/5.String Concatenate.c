#include<stdio.h>
int main()
{
    int i,j,length1,length2;
    char str1[]="MD.Firozzaman",str2[]="Sarkar",str3[20];
    for(i=0;str1[i]!='\0';i++)
    {
        if(str1[i+1]=='\0')
        {
            length1=i+1;
            break;
        }

    }
    //printf("%d\n",length1);
    for(i=0;str2[i]!='\0';i++)
    {
        if(str2[i+1]=='\0')
        {
            length2=i+1;
            break;
        }
    }
    //printf("\n%d\n",length2);

    for(i=0,j=0;i<length1;i++,j++)
    {
        str3[j]=str1[i];
        //printf("%c",str3[j]);
        if(j==length1-1)
        {
            j=j+1;
            str3[j]=' ';
        }
    }
    printf("%s\n",str3);
    //str3[j]=' ';
    //printf("%s",str3);
    printf("\n");

    for(i=0;i<length2+1;i++,j++)
    {
        if(j==length1)
        {
            str3[j]=' ';
        }
        str3[j]=str2[i];
        //printf("%c",str3[j]);
    }
    str3[j]='\0';
    printf("%s",str3);

}
