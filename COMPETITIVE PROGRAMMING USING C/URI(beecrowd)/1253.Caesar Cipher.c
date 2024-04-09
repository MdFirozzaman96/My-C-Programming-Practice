#include<stdio.h>
int main()
{
    char str[50],ch,Ch;
    int j,i,t,key,val;
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {

        scanf("%s%d",str,&key);
        for(i=0;str[i]!='\0';i++)
        {
            Ch=str[i]-key;
            if(Ch<65)
            {
                Ch=65-Ch;
                Ch=91-Ch;
                if(str[i+1]=='\0')
                {
                    printf("%c\n",Ch);
                }
                else
                {
                    printf("%c",Ch);
                }
            }
            else
            {
                if(str[i+1]=='\0')
                {
                    printf("%c\n",Ch);
                }
                else
                {
                    printf("%c",Ch);
                }
            }
        }

    }

    return 0;

}
