// Platform: AtCoder

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    cout << (n * 2) / __gcd(n, 2LL);
    return 0;
}