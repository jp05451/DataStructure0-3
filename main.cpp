#include <iostream>

using namespace std;

int main()
{
    unsigned long long int num;
    int sum = 0;

    while (cin >> num)
    {
        sum = 0;
        num %= 997;
        sum = num * (num + 1) / 2;
        sum %= 997;
        cout << sum << endl;
    }
}