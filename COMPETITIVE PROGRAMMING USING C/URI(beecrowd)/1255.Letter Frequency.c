#include<stdio.h>
#include<string.h>

int arr[210],k;
char STR[250];
int Count(char str[],char ch,int len)
{
    int i,count=0;
    for(i=0;i<len;i++)
    {
        if(str[i]==ch||str[i]=='A'+(ch-'a')||str[i]=='a'+(ch-'a'))
        {
            count+=1;
        }
    }
    return count;
}
void Most_Freq(int x,char ch)
{
    if(arr[k]<=x)
    {
        if(arr[k]==x)
        {
            k+=1;
            arr[k]=x;
            STR[k]=ch;
        }
        else
        {
            arr[k]=x;
            STR[k]=ch;
        }
    }
}
int main()
{
    int n,i,j,len,freq;
    char str[250];
    scanf("%d",&n);
    for(i=0;i<n+1;i++)
    {
        gets(str);
        k=0;
        len=strlen(str);
        for(j=0;j<len;j++)
        {
            freq=Count(str,str[j],len);
            Most_Freq(freq,str[j]);
        }
        printf("%d\n",freq);
        for(j=0;j<=k;j++)
        {
            printf("%c",STR[j]);
        }
    }
}
