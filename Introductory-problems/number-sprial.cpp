#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    vector<long long> ansArr;

    while (t--)
    {
        long long row, col;
        cin >> row >> col;

        if (row == 1 && col == 1)
        {
            ansArr.push_back(1);
            continue;
        }

        if (row <= col)
        {
            long long maxEle = 1LL * col * col;

            if (col % 2 != 0)
            {
                long long ans = maxEle - (row - 1);
                ansArr.push_back(ans);
            }
            else
            {
                long long minEle = maxEle - (2LL * col - 2);
                long long ans = minEle + (row - 1);
                ansArr.push_back(ans);
            }
        }
        else
        {
            long long maxEle = 1LL * row * row;

            if (row % 2 == 0)
            {
                long long ans = maxEle - (col - 1);
                ansArr.push_back(ans);
            }
            else
            {
                long long minEle = maxEle - (2LL * row - 2);
                long long ans = minEle + (col - 1);
                ansArr.push_back(ans);
            }
        }
    }

    for (long long x : ansArr)
    {
        cout << x << '\n';
    }

    return 0;
}