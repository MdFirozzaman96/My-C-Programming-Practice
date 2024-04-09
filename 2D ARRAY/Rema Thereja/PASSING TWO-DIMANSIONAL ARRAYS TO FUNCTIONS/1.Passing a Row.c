#include<stdio.h>
void func(int Arr[])
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("%d ",Arr[i]);
    }
}
int main()
{
    int arr[][3]={{1,2,3,4,5},{5,4,3,2,1}};
    func(arr[1]);
    printf("\n");
    return 0;
}
