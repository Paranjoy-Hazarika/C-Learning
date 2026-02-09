#include <stdio.h>

#define MAX_TEMP 300
#define LOWER_TEMP 0
#define STEP 20

float celsiusToFahr(int lower) {
        return (((lower * (9.0/5.0))+ 32.0));
}

float fahrToCelsius(int lower) {
        return ((5.0/9.0) * (lower - 32.0));
}

int main() {
    float fahr, celsius;
    float lower, upper, step;

    lower = LOWER_TEMP;
    upper = MAX_TEMP;
    step = STEP;

    printf("FAHRENHEIT TO CELSIUS & CELSIUS TO FAHRENHEIT CONVERSION\n");
    while (upper >= lower) {
        celsius = fahrToCelsius(upper);
        fahr = celsiusToFahr(upper);
        printf("%.0fF\t-\t%.1fC\t|\t%.0fC\t-\t%.1fF\n", upper, celsius, upper, fahr);
        upper -= step; 
    }

    return 0;
}