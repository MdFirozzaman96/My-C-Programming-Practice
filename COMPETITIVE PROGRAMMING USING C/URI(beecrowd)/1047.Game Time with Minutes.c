#include<stdio.h>
int main()
{
    int sh,sm,fh,fm,dur,dur_hr,sum_min,minhr;
    scanf("%d%d%d%d",&sh,&sm,&fh,&fm);

    if(sh>fh)
    {
        sh+=1;
        dur_hr=24-sh+fh;
        sum_min=60-sm+fm;
        if(sum_min>=60)
        {
            minhr=sum_min/60;
            sum_min=sum_min%60;
            dur=dur_hr+minhr;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",dur,sum_min);
        }
        else
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",dur_hr,sum_min);
        }
    }
    else if(sh==fh)
    {
        if(sm>fm||sm==fm)
        {
            sh+=1;
            dur_hr=24-sh+fh;
            sum_min=60-sm+fm;
            if(sum_min>=60)
            {
                minhr=sum_min/60;
                sum_min=sum_min%60;
                dur=dur_hr+minhr;
                printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",dur,sum_min);
            }
            else
            {
                printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",dur_hr,sum_min);
            }
        }
        else
        {
            sh+=1;
            dur_hr=fh-sh;
            sum_min=60-sm+fm;
            if(sum_min>=60)
            {
                minhr=sum_min/60;
                sum_min=sum_min%60;
                dur=dur_hr+minhr;
                printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",dur,sum_min);
            }
            else
            {
                printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",dur_hr,sum_min);
            }


        }
    }
    else
    {
        sh+=1;
        dur_hr=fh-sh;
        sum_min=60-sm+fm;
        if(sum_min>=60)
        {
            minhr=sum_min/60;
            sum_min=sum_min%60;
            dur=dur_hr+minhr;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",dur,sum_min);
        }
        else
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",dur_hr,sum_min);
        }

    }
    return 0;

}
