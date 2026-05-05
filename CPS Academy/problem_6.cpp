// Platform: CF Group

#include <iostream>
using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;
    int temp1 = n % 10;
    int temp2 = m % 10;
    cout << temp1 + temp2;
    return 0;
}
