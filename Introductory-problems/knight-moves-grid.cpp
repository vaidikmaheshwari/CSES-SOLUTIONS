#include <iostream>
#include <vector>
#include <queue>

using namespace std;
void solve(int n, vector<vector<int>> &ans)
{
    queue<pair<int, int>> q;
    q.push({0, 0});
    int dx[] = {-2, -2, -1, -1, 1, 1, 2, 2};
    int dy[] = {-1, 1, -2, 2, -2, 2, -1, 1};
    ans[0][0] = 0;
    while (!q.empty())
    {
        auto [x, y] = q.front();

        q.pop();
        for (int i = 0; i < 8; i++)
        {

            int row = x + dx[i];
            int col = y + dy[i];
            if (row >= 0 && row < n && col >= 0 && col < n && ans[row][col] == -1)
            {
                q.push({row, col});
                ans[row][col] = ans[x][y] + 1;
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> ans(n, vector<int>(n, -1));
    solve(n, ans);
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