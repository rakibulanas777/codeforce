#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int remaining_time = 240 - k;
    int sum_time = 0;
    int problems_solved = 0;

    for (int i = 1; i <= n; i++)
    {
        sum_time += i * 5;
        if (sum_time >= remaining_time)
            break;
        problems_solved++;
    }

    cout << problems_solved << endl;
    return 0;
}
