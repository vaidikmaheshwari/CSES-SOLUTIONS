#include <iostream>
#include <vector>

using namespace std;

struct T
{
    int n, a, b;
};

void solve(int n, int a, int b)
{
    // All ties
    if (a == 0 && b == 0)
    {
        cout << "YES\n";

        for (int i = 1; i <= n; i++)
            cout << i << " ";
        cout << '\n';

        for (int i = 1; i <= n; i++)
            cout << i << " ";
        cout << '\n';

        return;
    }

    // Impossible cases
    if (a + b > n || a == 0 || b == 0)
    {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";

    vector<int> p1(n + 1), p2(n + 1);

    // Player 1
    for (int i = 1; i <= n; i++)
        p1[i] = i;

    int k = a + b;

    // Construct Player 2
    for (int i = 1; i <= k; i++)
    {
        int pos = (i + b - 1) % k + 1;
        p2[pos] = i;
    }

    // Tie positions
    for (int i = k + 1; i <= n; i++)
        p2[i] = i;

    // Print Player 1
    for (int i = 1; i <= n; i++)
        cout << p1[i] << " ";
    cout << '\n';

    // Print Player 2
    for (int i = 1; i <= n; i++)
        cout << p2[i] << " ";
    cout << '\n';
}

int main()
{
    int t;
    cin >> t;

    vector<T> testcases(t);

    for (int i = 0; i < t; i++)
    {
        cin >> testcases[i].n >> testcases[i].a >> testcases[i].b;
    }

    for (int i = 0; i < t; i++)
    {
        solve(testcases[i].n,
              testcases[i].a,
              testcases[i].b);
    }

    return 0;
}