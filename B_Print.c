#include<stdio.h>
void printing(int a)
{
    for(int i = 1; i<=a; i++)
    {
        printf("%d",i);
        if(i<a)
        {
            printf(" ");
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    printing(n);
    return 0;
}