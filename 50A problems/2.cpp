#include <bits/stdc++.h>
// https://codeforces.com/contest/1995/problem/A
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, cnt = 1;
        cin >> n >> k;
        int l = 1;

        if (k == 0)
        {
            cout << 0 << endl;
        }
        else if (k <= n)
        {
            cout << 1 << endl;
        }
        else
        {
            k -= n;
            while (k > 0)
            {
                k = k - (n - l);
                cnt++;
                if (k > 0)
                {
                    k = k - (n - l);
                    cnt++;
                }
                l++;
            }

            cout<<cnt<<"\n";
            
        }
    }
}