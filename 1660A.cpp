#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int a, b;

    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        int sum;
        sum = a * 1 + b * 2;
        if (a == 0)
            sum = 0;
        cout << sum + 1 << endl;
    }

    return 0;
}