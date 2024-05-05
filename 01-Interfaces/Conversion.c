#include <stdio.h>
#include "Conversion.h"

double fahrenheit(int celsius){
    return celsius * 9.0 / 5.0 + 32.0;
}

double celsius(int fahr){
    return (fahr-32)*5.0/9.0;
}