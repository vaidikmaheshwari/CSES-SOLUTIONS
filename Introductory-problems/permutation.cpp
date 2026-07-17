#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = n;
    int j = n - 1;
    if (n == 1)
    {
        cout << 1;
        return 0;
    }
    if (n <= 3)
    {
        cout << "NO SOLUTION";
        return 0;
    }
    while (j > 0)
    {
        cout << j << " ";
        j = j - 2;
    }
    while (i > 0)
    {

        cout << i << " ";
        i = i - 2;
    }

    return 0;

    // n=4 - 3,1,4,2
    // n=5 - 4,2,5,3,1
    // n=6 - 5,3,1,6,4,2
    // n=7 - 6,4,2,7,5,3,1
}