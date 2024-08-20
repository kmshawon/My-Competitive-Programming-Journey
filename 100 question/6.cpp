#include <bits/stdc++.h>
using namespace std;
int main()
{
    int mat[3][3];
    bool ans[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> mat[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            ans[i][j] = true;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (mat[i][j] > 0 && mat[i][j] % 2 == 1)
            {
                // center
                if (i >= 0 && j <= 2)
                {
                    ans[i][j] = !ans[i][j];
                }

                // left

                j--;
                if ((i >= 0 && i <= 2) && ( j >= 0 && j <= 2))
                {
                    ans[i][j] = !ans[i][j];
                }
                j++;

                // Right
                j++;
                if ((i >= 0 && i <= 2) && ( j >= 0 && j <= 2))
                {
                    ans[i][j] = !ans[i][j];
                }
                j--;

                // up
                i--;
                if ((i >= 0 && i <= 2) && ( j >= 0 && j <= 2))
                {
                    ans[i][j] = !ans[i][j];
                }
                i++;

                // Down
                i++;
                if ((i >= 0 && i <= 2) && ( j >= 0 && j <= 2))
                {
                    ans[i][j] = !ans[i][j];
                }
                i--;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << ans[i][j];
        }
        cout << endl;
    }
}