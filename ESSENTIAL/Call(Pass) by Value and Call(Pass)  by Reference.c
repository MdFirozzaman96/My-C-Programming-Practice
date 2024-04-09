#include<stdio.h>
int call_by_value(int a,int b)
{
    a = 50;
    b = 100;
}
void call_by_reference(int *a,int *b)
 {
     *a = 50;
     *b = 100;
 }
int main()
{
    int Choice,x,y;
    do
    {
        ///int Choice,x,y; // Can't announce here.
        x = 5;
        y =10;
        printf("1. Call By Value.\n2. Call By Reference.\n3. Exit\n\n");
        printf("Enter your choice : \n\n");
        scanf("%d",&Choice);
        switch(Choice)
        {
            case 1:
                printf("Before Calling 'call_by_value' function :\n\n");
                printf("The value of x and y are : %d and %d\n\n",x,y);
                call_by_value(x,y);
                printf("After Calling 'call_by_reference' function :\n\n");
                printf("The value of x and y are : %d and %d\n\n",x,y);
                break;
            case 2:
                printf("Before Calling 'call_by_reference' function :\n\n");
                printf("The value of x and y are : %d and %d\n\n",x,y);
                call_by_reference(&x,&y);
                printf("After Calling 'call_by_reference' function :\n\n");
                printf("The value of x and y are : %d and %d\n\n",x,y);
                break;
            case 3:
                break;
        }
    }while(Choice<=3);
    return 0;
}
