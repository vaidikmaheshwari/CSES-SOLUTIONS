#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<string> a(n);
    for (auto &s : a)
        cin >> s;

    vector<string> b(n, string(m, '?'));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (char c = 'A'; c <= 'D'; c++)
            {
                if (c == a[i][j])
                    continue;
                if (i > 0 && c == b[i - 1][j])
                    continue;
                if (j > 0 && c == b[i][j - 1])
                    continue;
                b[i][j] = c;
                break;
            }
        }
    }

    for (auto &s : b)
        cout << s << "\n";
}