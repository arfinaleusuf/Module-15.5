#include<stdio.h>
#include<math.h>
int my_abs(int a)
{
    int result = abs(a);
    return result;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",my_abs(n));
    return 0;
}