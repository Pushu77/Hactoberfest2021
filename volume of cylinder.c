//A program to compute the volume of a cylinder.
#include<stdio.h>
#include<math.h> /* Include this library when using mathematical functions...for my
case i used pow()*/

#define PI 3.14159265 /* define your PI...a global variable*/

int main() {

int radius;
     int height;

        float area;
           float volume;

              printf("Enter the radius of the circle:\n");
            scanf("%d",&radius);
        printf("Enter the height of the cylinder:\n");
    scanf("%d",&height);

radius=pow(radius,2)*PI;

    volume=radius*height;

        printf("The area of the circle = %.3f\n", area);/*Truncate the output to 3 decimal places uding %.3f*/
            printf("The volume of the cylinder = %.4f\n", volume);/*Truncate the output to 4 decimal places uding %.4f*/

                return 0;
}
