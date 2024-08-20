#include <bits/stdc++.h>
using namespace std;

const int N = 55;

int n;
int op[N];

void solve()
{
    cin >> n;
    for (int i = 1; i <= n; ++i)
        op[i] = 0;
    for (int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        ++op[x];
    }

    for (int i = 1; i <= n; ++i)
    {
        if (op[i] % 2 == 1)
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main()
{
    int tt = 1;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}