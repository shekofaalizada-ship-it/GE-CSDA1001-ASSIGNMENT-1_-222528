#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int units = get_int("Enter units consumed: ");
    float bill = 0;

    if (units <= 100)
    {
        bill = units * 5;
    }
    else
    {
        bill = 100 * 5;

        if (units <= 200)
        {
            bill = bill + (units - 100) * 6;
        }
        else
        {
            bill = bill + 100 * 6;
            bill = bill + (units - 200) * 8;
        }
    }

    // Service charge
    if (bill > 1000)
    {
        bill = bill + (bill * 0.10);
    }

    printf("Total electricity bill: %.2f taka\n", bill);

    return 0;
}
