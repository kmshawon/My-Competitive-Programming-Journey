#include <bits/stdc++.h>
//https://codeforces.com/problemset/problem/1994/A
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int mat[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> mat[i][j];
            }
        }
        if (n == 1 && m == 1)
        {
           // cout << -1 << endl;
             mat[0][0]=-1;
            
        }
        else if (m > 1)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m - 1; j++)
                {

                    int temp, temp2;
                    temp = mat[i][j];
                    temp2 = mat[i][j + 1];
                    mat[i][j + 1] = temp;
                    mat[i][j] = temp2;
                }
            }
        }


        else if(m==1)
        {
           for (int i = 0,j=0; i < n-1; i++)
            {
                

                    int temp, temp2;
                    temp = mat[i][j];
                    temp2 = mat[i+1][j];
                    mat[i+1][j] = temp;
                    mat[i][j] = temp2;
                
            }
        }
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << mat[i][j] << " ";
            }
            cout << '\n';
        }
    }
}