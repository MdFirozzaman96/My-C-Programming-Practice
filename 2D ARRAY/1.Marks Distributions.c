#include<stdio.h>
int main()
{
    /*float exam_student[3][5];
    int exam,student,i,j;
    printf("Enter all the exam marks : \n");
    for(exam=0;exam<3;exam++)
    {
        for(student=0;student<5;student++)
        {
            scanf("%d",&exam_student[exam][student]);
        }
    }
    for(student=0;student<5;student++)
    {
        exam_student[3][student]=exam_student[0][student]/4.0+exam_student[1][student]/4.0+exam_student[2][student]/2.0;
        printf("%0.2f\n",exam_student[3][student]);
    }*/


    int n,i,j;
    printf("Enter a number : \n");
    scanf("%d",&n);
    int mul[n][10];
    for(i=0;i<n;i++)
    {
        for(j=0;j<10;j++)
        {
            mul[i][j]=(i+1)*(j+1);
            printf("%d * %d = %d\n",i+1,j+1,mul[i][j]);
        }
        printf("\n");
    }

}
