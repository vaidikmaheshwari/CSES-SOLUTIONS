#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solve(int n, vector<string> &ans)
{
    if (n == 1)
    {
        ans.push_back("0");
        ans.push_back("1");
        return;
    }
    solve(n - 1, ans);
    vector<string> newAns;
    int ind = 0;
    for (int i = 0; i < ans.size(); i++)
    {
        newAns.push_back('0' + ans[i]);
    }
    for (int i = ans.size() - 1; i >= 0; i--)
    {
        newAns.push_back('1' + ans[i]);
    }
    ans = newAns;
}

int main()
{

    int n;
    cin >> n;
    vector<string> ans;
    solve(n, ans);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << '\n';
    }
    return 0;
}