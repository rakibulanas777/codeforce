#include <bits/stdc++.h>

using namespace std;
int main()
{
    int l, r, c = 0;
    cin >> l >> r;
    string name;
    cin >> name;

    for (int i = l - 1, j = r - 1; i < j; i++, j--)
    {
        int temp = name[i];
        name[i] = name[j];
        name[j] = temp;
    }

    cout << name << endl;
    return 0;
}