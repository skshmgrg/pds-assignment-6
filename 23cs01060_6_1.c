#include <stdio.h>
int checkprime(int a);
int main()

{
    int low, up;
    printf("input lower limit: ");
    scanf("%d", &low);
    printf("input upper limit: ");
    scanf("%d", &up);
    for (int i = low; i <= up; i++)
    {
        if (i == 1 || i==0)
            continue;
        if (checkprime(i))
            printf("%d, ", i);
    }
}
int checkprime(int a)
{
    int b = 0;
    for (int i = 2; i < a; i++)
    {

        if (a % i == 0)
        {
            b++;
            break;
        }
    }
    if (b == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}