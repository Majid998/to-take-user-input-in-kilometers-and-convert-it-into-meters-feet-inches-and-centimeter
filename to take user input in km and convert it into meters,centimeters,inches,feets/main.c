// this is a program to take user input about the distance between two cities in km and convert it into centi-meter, meter, inches, feets.
//Author Majid Mujahid Hussain Dated 2 December 2020.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float kilometer, meter, centimeter, foot, inches;//declaring the necessary variables required in the program.
    printf("Hello world!\n");
    printf("\t\n Please enter the distance between two cities in kilo-meters \n");
    scanf("%f",&kilometer);

    // to convert kilo-meter to centi-meter
    meter = kilometer * 1000;
    printf(" The distance of %f kilo-meters is equal to %f meter \n ",kilometer,meter);

    //converting kilo-meter into meter
    centimeter = kilometer * 100000;
    printf(" The distance of %f kilo-meters is equal to %f meters\t\n",kilometer, centimeter);

    // converting kilo-meter to inches.
    inches = kilometer * 39370.1;
    printf(" the distance of %f kilo-meters is equal to %f inches \n", kilometer, inches);

    // converting kilo-meter into foot
    foot = kilometer * 3280.84;
    printf(" The distance of %f kilo-meters is equal to %f foots\n", kilometer, foot);

    return 0;
}
