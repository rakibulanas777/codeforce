#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int c = 0;
    int a, b;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (a >= b)
            c = c + 0;
        else
        {
            c = c + (b - a);
        }
    }
    cout << c << endl;
    return 0;
}