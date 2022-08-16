#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    for (int i = 1; i <= 50; i++)
    {
        if (i % 3 != 0 && i % 5 != 0)
        {
            printf("%i\n", i);
        }
        else if (i % 3 == 0 && i % 5 == 0)
        {
            printf("FizBuz %i\n", i);
        }
        else if (i % 3 == 0)
        {
            printf("Fiz %i \n", i);
        }
        else if (i % 5 == 0)
        {
            printf("Buz %i\n", i);
        }
    }
}