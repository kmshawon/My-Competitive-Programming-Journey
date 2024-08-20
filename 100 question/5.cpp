#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, n1;
    cin >> n;
    n++;

    while (1)
    {
        n1 = n;
        int a, b, c, d;
        d = n1 % 10;
        n1 /= 10;
        c = n1 % 10;
        n1 /= 10;
        b = n1 % 10;
        n1 /= 10;
        a = n1 % 10;
        n1 /= 10;

        // cout<<a<<b<<c<<d;
        if (a != b && c != d && a != c && b != d && a != d && c != b)
        {
            cout << a << b << c << d << endl;
            break;
        }
        n++;
    }
}