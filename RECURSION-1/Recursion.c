#include<stdio.h>
void Recurse(int count)
{
    int arr[4] = {4,6,8,9};
    if(count>3)
    {
        return;
    }
    Recurse(count+1);
    printf("%d ",arr[count]);


}
int main()
{
    Recurse(0);
    return 0;
}
