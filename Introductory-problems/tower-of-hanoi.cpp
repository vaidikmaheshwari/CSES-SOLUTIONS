#include <iostream>
#include <vector>
#include <utility>

using namespace std;
vector<pair<int, int>> ans;
void hanoi(int n, int source, int helper, int destination)
{
    if (n == 1)
    {
        ans.push_back({source, destination});
        return;
    }
    // total disk - n - tthen n-1 disk ko move source->helper
    hanoi(n - 1, source, destination, helper);

    // then move n th disk to destination
    ans.push_back({source, destination});
    // n-1 disk helper -> destination pr move

    hanoi(n - 1, helper, source, destination);
}
int main()
{
    int n;
    cin >> n;
    hanoi(n, 1, 2, 3);
    cout << ans.size() << '\n';
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i].first << " " << ans[i].second << '\n';
    }
    return 0;
}