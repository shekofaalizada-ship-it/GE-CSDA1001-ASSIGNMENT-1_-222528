#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int booked = 0, empty = 0, seat;

    for (int i = 1; i <= 40; i++)
    {
        seat = get_int("Seat %d (1 = booked, 0 = empty): ", i);

        if (seat == 1)
        {
            booked++;
        }
        else if (seat == 0)
        {
            empty++;
        }

        if (booked == 40)
        {
            break;
        }
     }

    printf("Total booked seats: %d\n", booked);
    printf("Total empty seats: %d\n", empty);

    return 0;
}
