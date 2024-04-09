#include<stdio.h>
int main()
{
    float sal,tax1,tax2,tax3;
    scanf("%f",&sal);

    if(0.00<=sal&&sal<=2000.00)
    {
        printf("Isento\n");
    }
    else if(2000.01<=sal&&sal<=3000.00)
    {
        sal=sal-2000.00;
        tax1=(sal*0.08);
        printf("R$ %0.2f\n",sal);
    }
    else if(3000.01<=sal&&sal<=4500.00)
    {
        sal=sal-3000.00;
        tax2=(sal*0.18);
        tax1=(1000.00*0.08);
        sal=tax1+tax2;
        printf("R$ %0.2f\n",sal);
    }
    else
    {
        sal=sal-4500.00;
        tax3=(sal*0.28);
        tax2=(1500.00*0.18);
        tax1=(1000.00*0.08);
        sal=tax1+tax2+tax3;
        printf("R$ %0.2f\n",sal);
    }
    return 0;
}
