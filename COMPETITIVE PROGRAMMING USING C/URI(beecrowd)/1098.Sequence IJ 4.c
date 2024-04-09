#include<stdio.h>
int main()
{
    int i,j=0,I=0,J=1,k;
    float If=0.0,Jf=1.0;
    for(i=0;If<=2.0;i++)
    {
        k=i+1;
        while(j!=3)
        {
            printf("I=%d J=%d\n",I,J);
            J+=1;
            j++;
        }
        if(i>=2)
        {
            if(k%3==0)
            {
                J=1;
                If=If+0.2;
                I=If;
                Jf=Jf+0.2;
            }
            else if(If==1.0||If==2.0)
            {
                printf("I=%d J=%d\n",I,J);
            }
            else
            {
                printf("I=%0.1f J=%0.1f\n",If,Jf);
            }
        }
        J+=1;
        Jf+=1;
    }
}
