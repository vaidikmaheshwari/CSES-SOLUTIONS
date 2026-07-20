#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{

    string s;
    cin >> s;
    vector<int> arr(256, 0);
    for (int i = 0; i < s.size(); i++)
    {
        arr[s[i]]++;
    }
    int odd = -1;
    string ans;
    int oddCount = 0;
    for (int i = 0; i < arr.size(); i++)
    {

        if (arr[i] == 0)
            continue;
        else if (arr[i] % 2 != 0)
        {
            oddCount++;
            odd = i;
        }

        else
        {
            if (ans.empty())
            {
                for (int j = 0; j < arr[i]; j++)
                {
                    ans += char(i);
                }
            }
            else
            {
                int in = ans.size() / 2;
                char ch = char(i);

                ans.insert(in, arr[i], ch);
            }
        }
    }
    if (oddCount > 1)
    {
        cout << "NO SOLUTION";

        return 0;
    }
    if (odd != -1)
    {
        int in = ans.size() / 2;
        char ch = char(odd);

        ans.insert(in, arr[odd], ch);
    }
    cout << ans;

    return 0;
}