#include<stdio.h>
int main()
{
    int i,J,I=1,val;
    val=7;
    for(J=7;I<=9;J--)
    {
        printf("I=%d J=%d\n",I,J);
        {
            if(J==val-2)
            {
                val=J+4;
                J+=5;
                I+=2;
            }
        }
    }
    return 0;
}
