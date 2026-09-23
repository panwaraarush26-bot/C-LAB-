#include <stdio.h>

int main()
{
    int choice;
    int num, a, b, c;
    float marks;

    printf("===== MENU =====\n");
    printf("1. Check Positive, Negative or Zero\n");
    printf("2. Check Even or Odd\n");
    printf("3. Find Largest Among Three Numbers\n");
    printf("4. Grade Calculation\n");

    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter a number: ");
            scanf("%d", &num);

            if(num > 0)
            {
                printf("The number is Positive");
            }
            else if(num < 0)
            {
                printf("The number is Negative");
            }
            else
            {
                printf("The number is Zero");
            }
            break;

        case 2:
            printf("Enter a number: ");
            scanf("%d", &num);

            if(num % 2 == 0)
            {
                printf("The number is Even");
            }
            else
            {
                printf("The number is Odd");
            }
            break;

        case 3:
            printf("Enter three numbers: ");
            scanf("%d %d %d", &a, &b, &c);

            if(a >= b && a >= c)
            {
                printf("%d is the Largest number", a);
            }
            else if(b >= a && b >= c)
            {
                printf("%d is the Largest number", b);
            }
            else
            {
                printf("%d is the Largest number", c);
            }
            break;

        case 4:
            printf("Enter your marks: ");
            scanf("%f", &marks);

            if(marks >= 90)
            {
                printf("Grade: A+");
            }
            else if(marks >= 80)
            {
                printf("Grade: A");
            }
            else if(marks >= 70)
            {
                printf("Grade: B");
            }
            else if(marks >= 60)
            {
                printf("Grade: C");
            }
            else if(marks >= 40)
            {
                printf("Grade: D");
            }
            else
            {
                printf("Grade: F");
            }
            break;

        default:
            printf("Invalid Choice!");
    }

    return 0;
}