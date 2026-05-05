// Platform: CF Group

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int year = n / 365;
    int temp = n % 365;
    int month = temp / 30;
    temp = temp % 30;
    int day = temp;
    cout << year << " years" << endl;
    cout << month << " months" << endl;
    cout << day << " days" << endl;
    return 0;
}
