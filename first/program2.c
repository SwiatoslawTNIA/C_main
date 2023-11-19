#include <stdio.h>
int main()
{
    // //print the references:
    // printf("%d roses cost %2f per %d\n", 24, 19.95, 12);
    // //another example:
    // printf("%s %d %f %c\n", "Swiatoslaw", 18, 77.4, 'X');
    // //controlling the number of floating points output:
    // printf("%f %.3f %.2f %.1f", 4.12345, 4.12345, 4.12345, 4.12345);
    // //writing an example from the book:
    printf("Quantity\tCost\tTotal\n");
    printf("%d\t\t$%.2f\t$%.2f\n", 3, 9.99, 29.97);
    printf("Too many spaces    \b\b\b\b can be fixed with the ");
    printf("\\%c Escape character\n", 'b');
    printf("\n\a\n\a\n\a\n\aSkip a few lines, and beep ");
    printf("a few beeps. \n\n\n");
    printf("%s %c.", "You are kicking butt learning.", 'C');
    printf("You just finished chapter %d.\n You have finished ", 4);
    printf("%.1f%c of the book.\n", 12.500, '%');
    printf("\n\nOne third equals %.2f or ", 0.333333);
    printf("%.3f or %.4f or", 0.33333, 0.33333);
    printf("%.5f or %.6f.", 0.33333, 0.33333);
}