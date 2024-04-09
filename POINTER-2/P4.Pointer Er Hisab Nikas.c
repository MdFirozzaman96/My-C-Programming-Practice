#include<stdio.h>
#include<string.h>
int main()
{
    int arr[]={130,133,136,141,143,146};
    int i;
    int *p;
    p = arr;

    //char str = "Bangladesh"; // Error! array type is not assignable.
    //char str[] = "Bangladesh";//It's OK.
    char *str = "Bangladesh";

    printf("arr[] is : ");
    for(i=0;i<6;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\n\n*p = %d\n",*p);
    printf("*p+1 = %d\n",*p+1);
    printf("*(p+1) = %d\n",*(p+1));
    printf("*p+2 = %d\n",*p+2);
    printf("*(p+2) = %d\n",*(p+2));

    printf("\nIn Case of String : \n");
    printf("\n*str is : %s\n\n",str);
    printf("*str = %c\n",*str);
    printf("*str+1 = %c\n",*str+1);
    printf("*(str+1) = %c\n",*(str+1));
    printf("*str+2 = %c\n",*str+2);
    printf("*(str+2) = %c\n",*(str+2));
}
