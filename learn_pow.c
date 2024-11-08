#include <stdio.h>
#include <math.h>

int main()
{
    double data = 5.0, time = 3.0; // Use double data type
    double c = pow(data, time);    // pow() returns a double
    printf("%.0f", c);             // Print as a whole number

    return 0;
}
