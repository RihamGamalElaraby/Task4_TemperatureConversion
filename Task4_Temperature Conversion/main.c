/****************************************************
author: Riham Gamal Elaraby
Email: rehamelaraby2272@gmail.com
Task4: Temperature Conversion
Develop a program that converts temperature
from Fahrenheit to Celsius or vice versa.
Linked-in:https://www.linkedin.com/in/riham-el-araby-b0bba7159/
****************************************************/

#include <stdio.h>
float fahrenheit_to_celsius(float fahrenheit);
float celsius_to_fahrenheit(float celsius);
unsigned int choice;
float temperature;

float fahrenheit_to_celsius(float fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}
float celsius_to_fahrenheit(float celsius) {
    return (celsius * 9/5) + 32;
}


int main() {


    do {
        printf("Temperature Converter\n");
        printf("1. Fahrenheit to Celsius\n");
        printf("2. Celsius to Fahrenheit\n");
        printf("3. Exit\n");

        printf("Enter your choice (1, 2, or 3): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter temperature in Fahrenheit: ");
                scanf("%f", &temperature);
                float celsius = fahrenheit_to_celsius(temperature);
                printf("%.2f Fahrenheit is equal to %.2f Celsius\n", temperature, celsius);
                break;
            case 2:
                printf("Enter temperature in Celsius: ");
                scanf("%f", &temperature);
                float fahrenheit = celsius_to_fahrenheit(temperature);
                printf("%.2f Celsius is equal to %.2f Fahrenheit\n", temperature, fahrenheit);
                break;
            case 3:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter 1, 2, or 3.\n");
        }

    } while (choice != 3);

    return 0;
}

