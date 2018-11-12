///Temperature Conversion
#include<stdio.h>
int main()
{
    int from, to;
    float value;
    printf("---------Temperature Conversion---------\n");
    printf("Enter no of unit to convert from:\n1.Celcius\n2.Farenheit\n3.Kelvin\n");
    scanf("%d", &from);
    printf("Enter no of unit to convert to:\n1.Celcius\n2.Farenheit\n3.Kelvin\n");
    scanf("%d", &to);
    printf("Enter the value to convert:");
    scanf("%f", &value);
    ///converting given value to desired scale
    switch(from)
    {
    case 1:
        value=value+273.15;
        break;
    case 2:
        value=(5/9)*value+273;
        break;
    case 3:
        break;
    }
    switch(to)
    {
    case 1:
        value=value-273.15;
        break;
    case 2:
        value=value*9/5-459.67;
        break;
    case 3:
        break;
    }
    printf("Converted value: %f\n", value);
    return 0;

}
