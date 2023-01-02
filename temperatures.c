/*
Display a table of Farenhenit-Celcius temperatures.

*/

#include <stdio.h>

int main(int argc, int *argv[])
{
   // prints table for temperatures
   // in range 0, 20, ..., 300

   float celcius, fahr;
   int lower, upper, step;

   lower  = 0; /* lower limit of temperature table */
   upper  = 300; /* upper limit of temperature table */
   step = 20; /* step size */

   fahr = lower; // sets the current temp to curr step

   while(fahr <= upper)
   {
        celcius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celcius);

        // increment the step
        fahr = fahr + step;
   }
}
