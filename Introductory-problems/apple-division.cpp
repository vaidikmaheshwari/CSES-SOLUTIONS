#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void solve(vector<long long> &arr, long long currSum, long long totalSum, long long &ans, int ind)
{
    if (ind == arr.size())
    {
        long long otherSum = totalSum - currSum;
        ans = min(ans, abs(currSum - otherSum));
        return;
    }

    // include
    currSum += arr[ind];
    solve(arr, currSum, totalSum, ans, ind + 1);

    // exclude
    currSum -= arr[ind];

    solve(arr, currSum, totalSum, ans, ind + 1);
}
int main()
{
    int n;
    cin >> n;
    vector<long long> apple;
    long long totalSum = 0;
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        apple.push_back(x);
        totalSum += x;
    }
    long long currSum = 0;
    long long ans = INT_MAX;
    solve(apple, currSum, totalSum, ans, 0);
    cout << ans << endl;
}