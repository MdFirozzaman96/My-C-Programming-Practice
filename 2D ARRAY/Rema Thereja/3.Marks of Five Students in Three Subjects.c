#include<stdio.h>
int main()
{
    int marks[5][3],i,j,sub1=0,sb1,sub2=0,sb2,sub3=0,sb3,temp;
    for(i=0;i<5;i++)
    {
        printf("Enter the marks obtained by student %d\n",i+1);
        for(j=0;j<3;j++)
        {
            printf("marks[%d][%d] = ",i,j);
            scanf("%d",&marks[i][j]);
            if(j==0)
            {
                if(marks[i][j]>sub1)
                {
                    sub1=marks[i][j];
                }
                else
                {
                    sb1=sub1;
                    temp=sb1;
                    sub1=temp;
                }
            }
            else if(j==1)
            {
                if(marks[i][j]>sub2)
                {
                    sub2=marks[i][j];
                }
                else
                {
                    sb2=sub2;
                    temp=sb2;
                    sub2=temp;
                }
            }
            else
            {
                if(marks[i][j]>sub3)
                {
                    sub3=marks[i][j];
                }
                else
                {
                    sb3=sub3;
                    temp=sb3;
                    sub3=temp;
                }
            }
        }
        printf("\n");
    }
    printf("The highest marks obtained in the subject 1 = %d\n",sub1);
    printf("The highest marks obtained in the subject 2 = %d\n",sub2);
    printf("The highest marks obtained in the subject 3 = %d\n",sub3);
}
