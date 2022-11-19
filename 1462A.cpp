#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0, j = n - 1; i < j + 1; i++, j--)
        {
            if (i != j)
                cout << arr[i] << " " << arr[j] << " ";
            if (i == j)
                cout
                    << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}