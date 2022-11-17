#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, c = 0;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n, temp = 0;
        cin >> n;
        char number[n];
        cin >> number;
        while (number[c] != '\0')
        {
            for (int i = 0; i < n; i++)
            {
                if (number[i] == '8' && n - i >= 11)
                {
                    temp = 1;
                    break;
                }
            }

            c++;
        }
        if (temp == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}