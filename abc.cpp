#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int sum = 1;

    for (int i = 0; i < n; i++)
    {
        if (sum < k)
            sum = sum * 2;
        else
            sum = sum + k;
    }
    cout << sum << endl;

    return 0;
}