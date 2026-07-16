#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long count = 0;
    int prev;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (i == 0)
        {
            prev = x;
        }
        else
        {
            if (prev <= x)
            {
                prev = x;
            }
            else
            {
                count += prev - x;
            }
        }
    }
    cout << count;
    return 0;
}