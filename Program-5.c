#include <stdio.h>

    int main () {
        float celsius, fahrenheit;

        printf ("Enter the remperature in celsius : ") ;
        scanf ("%f", &celsius);

        fahrenheit = (celsius*9/5) + 32;

        printf("Temperature in fahrenheit = %2f\n", fahrenheit);

        return 0;
    }
