#include<stdio.h>
int Strcom(char str1[],char str2[])
{
    int i=0;
    while(str1[i]==str2[i])
    {
        if(str1[i]!='\0'&&str2[i]=='\0'||str1[i]=='\0'&&str2[i]!='\0')
        {
            return 100;
        }
        else if(str1[i]=='\0'&&str2[i]=='\0')
        {
            return 130;
        }
        i+=1;
    }
    return 100;
}
int main()
{
    int i,n,val,C,R,S,total;
    C=0;
    R=0;
    S=0;
    char ch[2];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&val);
        scanf("%s",&ch);
        if(130==Strcom(ch," C"))
        {
           C=C+val;
        }
        else if(130==Strcom(ch," S"))
        {
            S=S+val;
        }
        else if(130==Strcom(ch," R"))
        {
            R=R+val;
        }

    }
    total=C+S+R;
    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",C);
    printf("Total de ratos: %d\n",R);
    printf("Total de sapos: %d\n",S);

}
