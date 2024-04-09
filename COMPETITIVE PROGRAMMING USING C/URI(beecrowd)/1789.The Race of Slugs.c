#include<stdio.h>
int main()
{
    int i,t,x,big=0,tmp,sp;
    while(scanf("%d",&t)!=EOF)
    {
       for(i=0;i<t;i++)
       {
          scanf("%d",&x);
          if(x>big)
          {
              big=x;
          }
          else
          {
              tmp=big;
              sp=tmp;
              big=sp;

          }

       }
       if(big<10)
       {
           printf("1\n");
       }
       else if(big>=10&&big<20)
       {
           printf("2\n");
       }
       else
       {
           printf("3\n");
       }
       big=0;
    }

    return 0;
}
