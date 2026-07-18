#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n == 0 || n == 1)
    {
        cout << 0;
        return 0;
    }
    cout << 0 << '\n';
    for (int i = 2; i <= n; i++)
    {
        long long totalbox = i * i;
        long long totalMove = (totalbox * (totalbox - 1)) / 2;
        long long attackMove = i == 2 ? 0 : (i - 1) * (i - 2) * 4;
        long long ans = totalMove - attackMove;
        cout << ans << '\n';
    }
    return 0;
}