#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int user_type = get_int("Enter user type (1=admin, 2=teacher, 3=student): ");
    int password = get_int("Enter password: ");

    if (user_type == 1 && password == 1234)
    {
        printf("Welcome Admin Panel\n");
    }
    else if (user_type == 2 && password == 2222)
    {
        printf("Welcome Teacher Panel\n");
    }
    else if (user_type == 3 && password == 3333)
    {
        printf("Welcome Student Panel\n");
    }
    else
    {
        printf("Invalid password\n");
    }

    return 0;
}
