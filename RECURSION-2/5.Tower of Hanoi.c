#include <stdio.h>



int towers(int num, char A,char B,char C)
{
    static int count=0;
    count+=1;
    if (num == 1)
    {
        printf("\ncount=%d,n=%d,",count,num);
        printf("\nOne-> Move disk 1 from peg %c to peg %c", A,C);
        return;
    }
    towers(num - 1, A,C,B);
    printf("\ncount=%d,n=%d,",count,num);
    printf(" Move disk %d from peg %c to peg %c\n", num,A,C);
    towers(num - 1, B,A,C);
    return count;
}





int main()

{
    int num,x;
    printf("Enter the number of disks : ");
    scanf("%d", &num);
    printf("The sequence of moves involved in the Tower of Hanoi are :\n");
    x=towers(num, 'A', 'C', 'B');
    printf("\n Move=%d\n",x);
    return 0;
}

/*#include <stdio.h>



void towers(int, char, char, char);



int main()

{

    int num;



    printf("Enter the number of disks : ");

    scanf("%d", &num);

    printf("The sequence of moves involved in the Tower of Hanoi are :\n");

    towers(num, 'A', 'C', 'B');

    return 0;

}

void towers(int num, char frompeg, char topeg, char auxpeg)

{

    if (num == 1)

    {

        printf("\n Move disk 1 from peg %c to peg %c", frompeg, topeg);

        return;

    }

    towers(num - 1, frompeg, auxpeg, topeg);

    printf("\n Move disk %d from peg %c to peg %c", num, frompeg, topeg);

    towers(num - 1, auxpeg, topeg, frompeg);

}*/

/*int ToH(int n)
{
    static int count=0;
    count+=1;
    if(n==1)
    {
        return 1;
    }
    else
    {
        ToH(n-1);
        ToH(n-1);
    }
    return count;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("Number of moves = %d\n",ToH(n));
    return 0;
}*/

