// Platform: Marisa OJ

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    const double PI = 3.14;
    double r;
    cin >> r;

    double circumference = 2 * PI * r;
    double area = PI * r * r;

    printf("%.3lf %.3lf\n", circumference, area);
}
