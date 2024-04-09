#include<stdio.h>
int main()
{
    char Name1[14]={'M','D','.','F','i','r','o','z','z','a','m','a','n','\0'};
    printf("%s\n",Name1);

    char Name2[]={'M','D','.','F','i','r','o','z','z','a','m','a','n','\0'};
    printf("%s\n",Name2);

    char Name3[]="MD.Firozzaman";
    printf("%s\n",Name3);

    char *Name4="MD.Firozzaman";
    printf("%s\n",Name4);
}
