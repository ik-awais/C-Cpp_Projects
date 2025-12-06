// Temperature Converter
#include <stdio.h>
void celsius_fahrenheit(float celsius);
void fahrenheit_celsius(float fahrenheit);
int main(){
    int check;
    float celsius, fahrenheit;
    printf("\tTemperature conversation\n1. Fahrenheit-Celsius\t2. Celsius-Fahrenheit?\n");
    scanf("%d", &check);
    if (check == 1)
    {
        printf("Enter value: ");
        scanf("%f", &fahrenheit);
        fahrenheit_celsius(fahrenheit);
    }
    else
    {
        printf("Enter value: ");
        scanf("%f", &celsius);
        celsius_fahrenheit(celsius);
    }

    return 0;
}
void celsius_fahrenheit(float celsius){
    printf("Temperature in Fahrenheit: %.2f\n", (celsius*9/5)+32);
}
void fahrenheit_celsius(float fahrenheit){
    printf("Temperature in Celsius: %.2f\n", (fahrenheit-32)*5/9);
}