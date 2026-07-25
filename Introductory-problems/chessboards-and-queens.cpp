#include <iostream>
#include <vector>

using namespace std;
int ans = 0;

bool isVaild(int row, int col, vector<vector<char>> &chess)
{
    for (int i = 0; i < row; i++)
    {

        // each row same col
        if (chess[i][col] == 'Q')
        {
            return false;
        }
    }
    int i = row, j = col;
    while (i > 0 && j > 0)
    {
        if (chess[i - 1][j - 1] == 'Q')
        {
            return false;
        }
        i--;
        j--;
    }

    i = row, j = col;
    while (i > 0 && j + 1 <= 7)
    {
        if (chess[i - 1][j + 1] == 'Q')
        {
            return false;
        }
        i--;
        j++;
    }
    return true;
}

void solve(int ind, vector<vector<char>> &chess)
{
    if (ind == 8)
    {
        ans++;
        return;
    }

    for (int j = 0; j < 8; j++)
    {
        if (chess[ind][j] == '.' && isVaild(ind, j, chess))
        {
            chess[ind][j] = 'Q';

            solve(ind + 1, chess);

            chess[ind][j] = '.';
        }
    }
}

int main()
{
    vector<vector<char>> chess(8, vector<char>(8));
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            char ch;
            cin >> ch;
            chess[i][j] = ch;
        }
    }

    solve(0, chess);
    cout << ans << endl;
    return 0;
}