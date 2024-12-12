#include <stdio.h>
#include <math.h>
int main()
{
    double x = 100000000.0;
    double pi = 0.0;
    int r = 1;
    for (int i = 0; i < x;i++)
    {
        pi = pi + r*(1.0 / (2 * i + 1));
        r = -r;
    }
    double PI = 4.0 * pi;
    printf("%.5f", PI);
    return 0;
}
