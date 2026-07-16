#include <iostream>
#include <climits>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int count = 1;
    int maxCount = INT_MIN;
    char prev = s[0];
    for (int i = 1; i < s.size(); i++)
    {
        if (prev == s[i])
        {
            count++;
        }
        else
        {
            maxCount = max(count, maxCount);
            count = 1;
            prev = s[i];
        }
    }
    cout << max(maxCount, count);

    return 0;
}