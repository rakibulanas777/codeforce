
#include <iostream>
using namespace std;

void compare(int a, int b, int *add_great, int *add_small)
{
    if (a > b)
    {

        *add_great = a;
        *add_small = b;
    }
    else
    {
        *add_great = b;
        *add_small = a;
    }
}

int main()
{
    int great, small, x, y;

    cin >> x >> y;

    compare(x, y, &great, &small);

    return 0;
}
