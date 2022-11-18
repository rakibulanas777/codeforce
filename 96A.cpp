#include <bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    cin >> name;
    int c = 1, condition = 1;
    while (name[c] != '\0')
    {
        if (name[c] == name[c - 1])
        {
            condition++;
            if (condition == 7)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
        else
        {
            condition = 1;
        }
        c++;
    }
    cout << "NO" << endl;
    return 0;
}