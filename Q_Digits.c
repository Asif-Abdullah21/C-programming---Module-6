#include <stdio.h>
int main()
{
    int n,rem;
    scanf("%d", &n);

    while (n--)
    {
        long long int val;
        scanf("%lld", &val);

        if (val == 0)
            printf("0\n");
        else
        {

            while (val > 0)
            {
                rem = val % 10;
                printf("%d ", rem);
                val = val / 10;
            }
            printf("\n");

        }
             
   
    }

    return 0;
}