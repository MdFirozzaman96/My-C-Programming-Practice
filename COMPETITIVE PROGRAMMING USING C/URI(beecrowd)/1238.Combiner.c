#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j;
    char str1[60],str2[60];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s%s",str1,str2);
        j=0;
        while(1)
        {
            if(j<strlen(str1))
            {
                printf("%c",str1[j]);
            }
            if(j<strlen(str2))
            {
                printf("%c",str2[j]);
            }
            if(str1[j]=='\0'&&str2[j]=='\0')
            {
               printf("\n");
               break;
            }
            j+=1;
        }
    }
    return 0;
}
