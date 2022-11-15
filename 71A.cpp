#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, c = 1;
    cin >> n;
    string name;
    for (int i = 0; i < n; i++)
    {
        cin >> name;
        if (name.size() > 10)
        {
            cout << name[0] << name.size() - 2 << name[name.size() - 1] << endl;
        }
        else
            cout << name << endl;
    }

    return 0;
}