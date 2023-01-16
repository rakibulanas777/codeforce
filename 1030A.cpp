#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int f = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            f = 1;
            break;
        }
    }
    if (f == 0)
    {
        cout << "EASY" << endl;
    }
    else
    {
        cout << "HARD" << endl;
    }

    return 0;
}