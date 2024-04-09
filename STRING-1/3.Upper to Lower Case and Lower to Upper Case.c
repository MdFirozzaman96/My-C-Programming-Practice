#include<stdio.h>
int main()
{
    //char Ch[]={'M','D','.','F','i','r','o','z','z','a','m','a','n',' ','S','a','r','k','e','r','\0'};
    char Ch[25];
    int i;
    printf("Enter a string : \n");
    gets(Ch);
    printf("\nInitially : %s\n\n",Ch);
    printf("After changing Upper to Lower case and Lower to Upper case: ");
    for(i=0;Ch[i]!='\0';i++)
    {
        if(Ch[i]>='A' && Ch[i]<='Z')
        {
            Ch[i]='a'+(Ch[i]-'A');
            printf("%c",Ch[i]);
        }

        else if(Ch[i]>='a' && Ch[i]<='z')
        {
            Ch[i]='A'+(Ch[i]-'a');
            printf("%c",Ch[i]);
        }
        else if(Ch[i]=='.' || Ch[i]==' ')
        {
            printf("%c",Ch[i]);
            continue;
        }
    }
    printf("\n");
    return 0;
}
