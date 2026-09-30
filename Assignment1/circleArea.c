#include <stdlib.h>
#include <stdio.h>

int main()
{
    //variable declaration and initialisation
    const double PI=3.142;
    double area;

    //capturing user input
    double r;
    printf("Provide the radius of a circle whose area you need calculated:");
    scanf("%lf",&r);
    area=PI*r*r;
    //printing the area to the user
    printf("The area is %lf", area);
    return 0;

}
