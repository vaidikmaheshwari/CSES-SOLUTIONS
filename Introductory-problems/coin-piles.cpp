#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> ans;

    for (int i = 1; i <= n; i++)
    {
        int a, b;
        cin >> a;
        cin >> b;
        if (max(a, b) <= min(a, b) * 2 && ((a + b) % 3 == 0))
        {
            ans.push_back("YES");
        }
        else
        {
            ans.push_back("NO");
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << '\n';
    }
    return 0;
}