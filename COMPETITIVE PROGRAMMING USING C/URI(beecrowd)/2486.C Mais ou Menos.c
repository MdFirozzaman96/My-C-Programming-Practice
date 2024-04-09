#include<stdio.h>
int Strcom(char str1[],char str2[])
{
    int i=0;
    if(str1[i]==str2[i])
    {
        while(str1[i]==str2[i])
        {
            if(str1[i]!='\0'&&str2[i]=='\0'||str1[i]=='\0'&&str2[i]!='\0')
            {
                return 116;
            }
            else if(str1[i]=='\0'&&str2[i]=='\0')
            {
                return 130;
            }
            i+=1;
        }
        return 116;
    }
    else
    {
        return 116;
    }
}
int main()
{
    char food[20];
    int i,menu,C,mul,input=0,total_c=0,sum=0;

    while(input==0)
    {
        scanf("%d",&menu);
        if(menu==0)
        {
            return 0;
        }
        else
        {
            for(i=0;i<menu+1;i++)
            {
                scanf("%d",&C);
                gets(food);
                if(Strcom(food,"suco de laranja")==130)
                {
                    mul=C*120;
                    printf("Firozzaman\n");
                    sum=sum+mul;
                }
                else if(Strcom(food,"morango fresco")==130||Strcom(food,"mamao")==130)
                {
                    printf("Firozzaman\n");
                    mul=C*85;
                    sum=sum+mul;
                }

                else if(Strcom(food,"goiaba vermelha")==130)
                {
                   printf("Firozzaman\n");
                    mul=C*70;
                    sum=sum+mul;
                }
                else if(Strcom(food,"manga")==130)
                {
                    printf("Firozzaman\n");
                    mul=C*56;
                    sum=sum+mul;
                }
                else if(Strcom(food,"laranja")==130)
                {
                    printf("Firozzaman\n");
                    mul=C*50;
                    sum=sum+mul;
                }
                else if(Strcom(food,"brocolis")==130)
                {
                    printf("Firozzaman\n");
                    mul=C*34;
                    sum=sum+mul;
                }
            }
            if(sum>130)
            {
                printf("Menos %d mg\n",sum-130);
            }
            else if(sum<110)
            {
                printf("Mais %d mg\n",110-sum);
            }
            else if(sum>=110&&sum<=130)
            {
                printf("%d mg\n",sum);
            }
            sum=0;
        }
    }
}
