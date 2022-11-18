#include <bits/stdc++.h>
using namespace std;

int main()
{
    int c = 0, count = 0;
    string name;
    cin >> name;
    while (name[c] != '\0')
    {
        if (name[c] == 'a')
            count++;
        c++;
    }
    int other, ans;
    if (name.size() / 2 <= count)
        cout << name.size() << endl;
    else
    {
        other = name.size() / 2 + 1;
        ans = name.size() - other;
        cout << ans << endl;
    }

    return 0;
}