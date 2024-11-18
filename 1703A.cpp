#include <iostream>
#include <string>
#include <algorithm> // For transform
using namespace std;

int main()
{
    int n;
    cin >> n; // Number of test cases

    while (n--)
    {
        string str;
        cin >> str;

        // Convert the string to lowercase for case-insensitive comparison
        transform(str.begin(), str.end(), str.begin(), ::tolower);

        if (str == "yes")
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
