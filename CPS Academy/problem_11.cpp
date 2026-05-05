// Platform: Marisa OJ

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    float result = sqrt((pow(x2 - x1, 2)) + (pow(y2 - y1, 2)));
    printf("%.2f", result);
    return 0;
}
