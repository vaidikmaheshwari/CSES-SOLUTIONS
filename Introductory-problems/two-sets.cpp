#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    vector<long long> arr1;
    vector<long long> arr2;
    long long totalSum = (n * (n + 1)) / 2;
    if (totalSum % 2 == 0)
    {
        long long maxSum = totalSum / 2;
        cout << "YES" << '\n';

        for (long long i = n; i >= 1; i--)

        {

            if (maxSum - i >= 0)
            {
                arr1.push_back(i);
                maxSum = maxSum - i;
            }
            else
            {
                arr2.push_back(i);
            }
        }

        cout << arr1.size() << '\n';
        for (long long i = 0; i < arr1.size(); i++)
        {
            cout << arr1[i] << " ";
        }
        cout << '\n';
        cout << arr2.size() << '\n';
        for (long long i = 0; i < arr2.size(); i++)
        {
            cout << arr2[i] << " ";
        }
    }
    else
        cout << "NO";

    return 0;
}