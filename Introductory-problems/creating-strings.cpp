#include <iostream>
#include <string>
#include <set>

using namespace std;
set<string> ans;

void solve(int ind, string &s)
{
    if (ind == s.size())
    {
        ans.insert(s);
        return;
    }
    for (int i = ind; i < s.size(); i++)
    {
        swap(s[i], s[ind]);
        solve(ind + 1, s);
        swap(s[ind], s[i]);
    }
}

int main()
{
    string s;
    cin >> s;

    solve(0, s);
    cout << ans.size() << '\n';
    for (auto &st : ans)
    {
        cout << st << '\n';
    }

    return 0;
}