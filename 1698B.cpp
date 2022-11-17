#include <stdio.h>
int main()
{
    int t, c;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        int temp = -1;
        scanf("%d", &n); 
        int arr[200001] = {};
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &c);
            arr[c]++;
            if (arr[c] >= 3)
                temp = c;
        }

        printf("%d\n", temp);
    }

    return 0;
}