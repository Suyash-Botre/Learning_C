// Que 2 calculate the area of the circle and modify the same program to calculate the
//       volume of a cylinder given its radius and height
#include <stdio.h>

int main()
{
    float pie = 3.141592653595;
    int r, h;
    printf("Input radius of circle in cm ");
    scanf("%d", &r);
    float area = pie * r * r;
    printf("The area of the circle is %f cmsq\n", area);
    printf("Input height of cylinderin cm ");
    scanf("%d", &h);
    float volume = area * h;
    printf("The volume of cylinder is %f cmcube", volume);
    return 0;
}