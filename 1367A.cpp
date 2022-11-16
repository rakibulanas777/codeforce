#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, c = 0;
    cin >> n;
    string str;
    for (int i = 0; i < n; i++)
    {
        cin >> str;

        for (int i = 0; i < str.size(); i++)
        {
            int flag = 0;
            for (int j = 0; j < str.size(); j++)
            {
                // checking if two characters are equal
                if (str[i] == str[j] and i != j)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
                cout << str[i];
        }
    }

    return 0;
}