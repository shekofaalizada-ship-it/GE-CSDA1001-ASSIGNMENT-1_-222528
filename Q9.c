#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string num_str = get_string("Enter a number: ");
    int sum = 0;
    int odd_count = 0;

    for (int i = 0; i < strlen(num_str); i++)
    {
        int digit = num_str[i] - '0'; 
        sum += digit;

        if (digit % 2 != 0)
        {
            odd_count++;
        }
    }

    printf("Sum of digits: %d\n", sum);
    printf("Number of odd digits: %d\n", odd_count);

    return 0;
}
