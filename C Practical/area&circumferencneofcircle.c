/*Write a C program to calculate area and circumference of a circle.*/

#include<stdio.h>
#include<math.h>
int main()
{
    float r,area,circumference;
    printf("Enter the radius of the circle: ");
    scanf("%f",&r);
    area=3.14*r*r;
    circumference=2*3.14*r;
    printf("The area of the circle is: %f\n",area);
    printf("The circumference of the circle is: %f",circumference);
    return 0;
}

/*Output*/
/*
Enter the radius of the circle: 5
The area of the circle is: 78.500000
The circumference of the circle is: 31.400000

=== Code Execution Successful ===
*/
