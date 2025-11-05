#include<stdio.h>
int fun(int a,int b)
{
    int sum = a+b;
    return sum;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",fun(a,b));
    return 0;
}