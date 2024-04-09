#include<stdio.h>

void Lower_to_upper(char ch)
{
    char Ch;
    printf("Before converting lower to upper case : %c\n",ch);
    Ch=ch&95;
    printf("After converting lower to upper case : %c\n\n",Ch);
}
void Upper_to_lower(char ch)
{
    char Ch;
    printf("Before converting upper to lower case : %c\n",ch);
    Ch=ch|32;
    printf("After converting upper to lower case : %c\n\n",Ch);
}
int main()
{
    char ch;
    int option;
    do
    {
        printf("Enter a character : ");
        scanf("%c",&ch);
        printf("\nClick 1 to convert upper case to lower case.\n");
        printf("Click 2 to convert lower case to upper case.\n");
        printf("Click 3 to exit.\n\n");
        printf("Enter your option : ");
        scanf("%d",&option);
        switch(option)
        {
        case 1:
            printf("\n");
            Upper_to_lower(ch);
            break;
        case 2:
            printf("\n");
            Lower_to_upper(ch);
            break;
        }
    }while(option!=3);
}
