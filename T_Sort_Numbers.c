#include <stdio.h>
void sortAcc(int a[])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", a[i]);
    }
    printf("\n");
}
void original(int a[])
{
    for(int i=0; i<3;i++)
    {
        printf("%d\n",a[i]);
    }
}
int main()
{
    int a[3];
    int b[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i = 0 ; i<3; i++)
    {
        b[i] = a[i];
    }
    sortAcc(a);
    original(b);
    return 0;
}