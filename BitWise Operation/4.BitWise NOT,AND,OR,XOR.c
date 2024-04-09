#include<stdio.h>

void NOT(int x,int y)
{
    printf("Before performing NOT operation :\nx = %d, y = %d\n",x,y);
    x=~x;
    y=~y;
    printf("After performing NOT operation :\nx = %d, y = %d\n",x,y);
}
void AND(int x,int y)
{
    int z;
    z=x&y;
    printf("After performing AND operation :\nz = %d\n",z);
}
void OR(int x,int y)
{
    int z;
    z=x|y;
    printf("After performing OR operation :\nz = %d\n",z);
}
void XOR(int x,int y)
{
    int z;
    z=x^y;
    printf("After performing XOR operation :\nz = %d\n",z);
}
int main()
{
    int choice,a,b;
    do
    {
        printf("Enter two number to perform operation : ");
        scanf("%d%d",&a,&b);
        printf("\n1 for NOT opereation\n");
        printf("2 for AND opereation\n");
        printf("3 for OR opereation\n");
        printf("4 for XOR opereation\n");
        printf("5 for exit\n");
        printf("\nEnter your option : ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("\n");
            NOT(a,b);
            break;
        case 2:
            AND(a,b);
            break;
        case 3:
            OR(a,b);
            break;
        case 4:
            XOR(a,b);
            break;
        }
    }while(choice!=5);
}
