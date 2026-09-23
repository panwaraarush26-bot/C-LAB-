#include <stdio.h>

int main()
{
    // Variables for rectangle
    float length, breadth, area, perimeter;

    // Variables for temperature
    float celsius, fahrenheit;

    // Input for rectangle
    printf("----- AREA AND PERIMETER OF RECTANGLE -----\n");

    printf("Enter the length: ");
    scanf("%f", &length);

    printf("Enter the breadth: ");
    scanf("%f", &breadth);
    // Calculations
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    // Output
    printf("\nArea of Rectangle = %.2f\n", area);
    printf("Perimeter of Rectangle = %.2f\n", perimeter);

    // Input for temperature
    printf("\n----- TEMPERATURE CONVERSION -----\n");

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Conversion
    fahrenheit = (celsius * 9 / 5) + 32;

    // Output
    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);

    return 0;
}