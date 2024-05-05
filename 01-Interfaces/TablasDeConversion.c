#include <stdio.h>
#include "Conversion.h"

const int lower = 0;
const int upper = 300;
const int step = 20;

int main(){

    /* Fahrenheit a Celcius*/
    printf("Fahrenheit a Celcius    |    Celcius a Farenheit\n");
    printf("------------------------------------------------\n");
    for(int i = lower; i <= upper; i += step)
        printf("%3d | %3.lf               |    %3d | %3.lf\n",i,celsius(i), i, fahrenheit(i));
    return 0;
}