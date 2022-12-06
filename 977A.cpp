#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, sum;
    cin >> n >> k;
    sum = n;
    for (int i = 1; i <= k; i++)
    {
        if (sum % 10 != 0)
        {
            sum = sum - 1;
                }
        else
        {
            sum = sum / 10;
        }
    }
    cout << sum << endl;
    return 0;
}