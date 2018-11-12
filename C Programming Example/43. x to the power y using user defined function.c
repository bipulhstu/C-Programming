#include<stdio.h>
double calculatePower(double base , double exp)
{
    double result = 1.0;
    int i;
    for(i = 1; i<=exp; i++)
    {
        result = result * base;
    }
    return result;
}
int main()
{
    double base, exp, result;
    printf("Enter base : ");
    scanf("%lf",&base);
    printf("Enter exponent : ");
    scanf("%lf",&exp);

    result = calculatePower(base, exp);
    printf("%.0lf to the power %.0lf is %.2lf\n",base, exp, result);

    return 0;

}
