#include<stdio.h>
int main()
{
    char String[1000];
    int i;
    printf("Enter a string : \n");
    gets(String);
    ///Copy it's to output->Bangladesh is a small,poor and illiterate but beutifull country.
    ///Once upon a time,there lived a poor man names Azgor.
    for(i=0;String[i]!='\0';i++)
    {

            if(String[i]>='A'&&String[i]<='Z'||String[i]>='a'&&String[i]<='z'||String[i]>='0' && String[i]<='9')
            {
                if(String[i]>='a'&&String[i]<='z' && String[i-1] == ' '||String[i-1]==','||String[i-1]=='.')
                {
                    String[i]='A'+(String[i]-'a');
                    printf("%c",String[i]);
                }
                else if(String[i]>='A'&&String[i]<='Z' || String[i]>='0' && String[i]<='9' && String[i-1] == ' '||String[i-1]==','||String[i-1]=='.')
                {
                    printf("%c",String[i]);
                }
                else if(String[i]>='a'&&String[i]<='z' && String[i-1]>='A'&&String[i-1]<='z' || String[i-1]>='0' && String[i-1]<='9')
                {
                    printf("%c",String[i]);
                }

            }

            else if(String[i]==' '||String[i]==','||String[i]=='.')
            {
                if(String[i+1]>='a' && String[i+1]<='z'||String[i+1]>='A' && String[i+1]<='Z'||String[i+1]>='0' && String[i+1]<='9')
                {
                    printf("\n");
                }

            }

    }
    printf("\n");
}
