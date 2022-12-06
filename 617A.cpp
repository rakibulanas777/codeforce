#include <bits/stdc++.h>
using namespace std;
int greedyCoinChange(int arr[], int S)
{
    int count = 0, num;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] <= S)
        {
            num = S / arr[i];
            count = count + num;
            S = S - (num * arr[i]);
        }
    }
    return count;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    sort(arr, arr + 5, greater<int>());
    int res, n;
    cin >> n;
    res = greedyCoinChange(arr, n);
    cout << res << endl;
    return 0;
}