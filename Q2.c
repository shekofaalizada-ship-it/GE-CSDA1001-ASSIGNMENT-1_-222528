#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int total = get_int("Enter total number of classes: ");
    int attended = get_int("Enter attended classes: ");

    float percentage = ((float) attended / total) * 100;

    if (percentage >= 75)
    {
        printf("Allowed to sit in exam\n");
        printf("Attendance: %.2f%%\n", percentage);
    }
    else
    {
        int required = (75 * total + 99) / 100;  
        int more_classes = required - attended;

        printf("Not allowed\n");
        printf("Attendance: %.2f%%\n", percentage);
        printf("You needed to attend %d more classes to reach 75%%\n", more_classes);
    }

    return 0;
}
