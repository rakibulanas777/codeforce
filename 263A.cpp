#include <bits/stdc++.h>
using namespace std;
int main()
{
    int step = 0, temp;
    int arr[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 5; i++)
    {

        for (int j = 0; j < 5; j++)
        {
            if (arr[i][j] == 1)
            {

                if (i == 2)
                {

                    temp = arr[i][j];
                    arr[i][j] = arr[i][j + 1];
                    arr[i][j + 1] = temp;
                    step++;
                    break;
                }
                // else if (i == 2 && j > 2)
                // {
                //     temp = arr[i][j];
                //     arr[i][j] = arr[i][j + 1];
                //     arr[i][j + 1] = temp;
                //     step++;
                //     break;
                // }
                else if (j == 2)
                {
                    temp = arr[i][j];
                    arr[i][j] = arr[i + 1][j];
                    arr[i + 1][j] = temp;
                    step++;
                    break;
                }
                // else if (i < 2 && j == 2)
                // {
                //     temp = arr[i][j];
                //     arr[i][j] = arr[i + 1][j];
                //     arr[i + 1][j] = temp;
                //     step++;
                //     break;
                // }
                else if (i == 2 && j == 2)
                {

                    step = 0;
                    break;
                }
                else
                {
                    temp = arr[i][j];
                    arr[i][j] = arr[i + 1][j + 1];
                    arr[i + 1][j + 1] = temp;
                    step++;
                    break;
                }
            }
        }
    }
    cout << step << endl;
    return 0;
}