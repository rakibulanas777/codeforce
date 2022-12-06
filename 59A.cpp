#include <bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    cin >> name;
    int c = 0, CAP = 0, LOW = 0;
    while (name[c] != '\0')
    {
        if (name[c] >= 'A' && name[c] <= 'Z')
            CAP++;
        else if (name[c] >= 'a' && name[c] <= 'z')
            LOW++;
        c++;
    }

    if (LOW >= CAP)
    {
        transform(name.begin(), name.end(), name.begin(), ::tolower);
        cout << name << endl;
    }

    else
    {
        transform(name.begin(), name.end(), name.begin(), ::toupper);
        cout << name << endl;
    };
    return 0;
}