//  Find the area of a rectangle with hard input
/*#include <stdio.h>

int main()
{
    float length = 77;
    float breadth = 85;
    float area = length * breadth;
    printf("This is area of a rectangle %f", area);
    return 0;
}
*/


// b) Find the area of a rectangle with user define input
#include <stdio.h>

int main()
{
    float length;
    printf("Input the length = ");
    scanf("%f", &length);
    float breadth;
    printf("Input the breadth= ");
    scanf("%f", &breadth);
    printf("The area of rectangle is = %f", length * breadth);
    return 0;
}