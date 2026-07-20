#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    int zeros = 0;
    int i = 5;
    while (n / i > 0)
    {
        zeros = zeros + n / i;
        i = i * 5;
    }
    cout << zeros;
    return 0;
}