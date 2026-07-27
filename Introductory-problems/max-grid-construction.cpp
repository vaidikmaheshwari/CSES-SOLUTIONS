#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> ans(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        ans[i][i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (i == 0)
            {
                ans[j][0] = j;
                ans[0][j] = j;
            }
            else
            {
                ans[i][j] = i ^ j;
                ans[j][i] = i ^ j;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}