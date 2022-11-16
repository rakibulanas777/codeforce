#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, c = 1, count = 0;
    cin >> n;
    int p, v, t;
    for (int i = 0; i < n; i++)
    {
        cin >> p >> v >> t;
        if (p == 1 && v == 1 || p == 1 && t == 1 || v == 1 && t == 1)
            count++;
    }
    cout << count << endl;
    return 0;
}