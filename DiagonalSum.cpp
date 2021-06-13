
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n <= 2)
    {
        cout << "Invalid size";
        return 0;
    }
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "The Array is: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Diagonal sum is: ";
    int left = 0;
    int right = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                left = left + a[i][j];
            }
            if ((i + j) == (n - 1))
            {
                right = right + a[i][j];
            }
        }
    }
    cout << left + right;

    return 0;
}
