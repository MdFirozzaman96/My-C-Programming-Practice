#include<stdio.h>
int main()
{
    float salary,new_salary,mony_earned;
    int In_percentage;
    scanf("%f",&salary);
    if(0<=salary&&salary<=400.00)
    {
        mony_earned=(salary*15.00)/100.00;
        new_salary=mony_earned+salary;
        printf("Novo salario: %0.2f\n",new_salary);
        printf("Reajuste ganho: %0.2f\n",mony_earned);
        printf("Em percentual: 15 %%\n");
    }
    else if(salary>=400.01&&salary<=800.00)
    {
        mony_earned=(salary*12.00)/100.00;
        new_salary=mony_earned+salary;
        printf("Novo salario: %0.2f\n",new_salary);
        printf("Reajuste ganho: %0.2f\n",mony_earned);
        printf("Em percentual: 12 %%\n");
    }
    else if(salary>=800.01&&salary<=1200.00)
    {
        mony_earned=(salary*10.00)/100.00;
        new_salary=mony_earned+salary;
        printf("Novo salario: %0.2f\n",new_salary);
        printf("Reajuste ganho: %0.2f\n",mony_earned);
        printf("Em percentual: 10 %%\n");
    }
    else if(salary>=1200.01&&salary<=2000.00)
    {
        mony_earned=(salary*7.00)/100.00;
        new_salary=mony_earned+salary;
        printf("Novo salario: %0.2f\n",new_salary);
        printf("Reajuste ganho: %0.2f\n",mony_earned);
        printf("Em percentual: 7 %%\n");
    }
    else if(salary>2000.00)
    {
        mony_earned=(salary*4.00)/100.00;
        new_salary=mony_earned+salary;
        printf("Novo salario: %0.2f\n",new_salary);
        printf("Reajuste ganho: %0.2f\n",mony_earned);
        printf("Em percentual: 4 %%\n");
    }
    return 0;
}
