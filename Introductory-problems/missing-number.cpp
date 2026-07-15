#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long n;

    cin >> n;
    long long sum = (n * (n + 1)) / 2;
    for (long long i = 0; i < n - 1; i++)
    {
        int x;
        cin >> x;
        sum -= x;
    }

    cout << sum;

    // xor method
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans ^= i;
    }
    for (int i = 0; i < n - 1; i++)
    {
        int x;
        cin >> x;
        ans ^= x;
    }
    cout << ans;

    return 0;
}