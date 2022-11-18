#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, c = 0, o = 0, n = 0, e = 0, z = 0, r = 0;
    cin >> t;
    char name[t];
    cin >> name;
    while (name[c] != '\0')
    {
        if (name[c] == 'o')
            o++;
        else if (name[c] == 'n')
            n++;
        else if (name[c] == 'e')
            e++;
        else if (name[c] == 'z')
            z++;
        else if (name[c] == 'r')
            r++;

        c++;
    }

    if (o >= 1 && n >= 1 && e >= 1)
    {
        for (int i = 0; i < n; i++)
        {
            cout << '1' << " ";
        }
    }
    if (z >= 1 && e >= 1 && r >= 1 && o >= 1)
    {
        for (int i = 0; i < z; i++)
        {
            cout << '0' << " ";
        }
    }

    return 0;
}