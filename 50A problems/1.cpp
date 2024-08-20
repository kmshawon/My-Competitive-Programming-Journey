#include <bits/stdc++.h>
// https://codeforces.com/problemset/problem/1997/A
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, ans = "";
        cin >> s;
        bool f = true;
        if (s.size() > 1)
        {
            for (int i = 0; i < s.size(); i++)
            {
                cout << s[i];
                if (s[i] == s[i + 1] && f)
                {
                    f = false;
                    if (s[i] == 'z')
                    {
                        cout << 'a';
                    }
                    else
                    {
                        char g = s[i] + 1;
                        cout << g;
                    }
                }
            }
            if (f)
            {
                if (s[s.size()-1] == 'z')
                    {
                        cout << 'a';
                    }
                    else
                    {
                        char g = s[s.size()-1] + 1;
                        cout << g<<endl;;
                    }
            }
            
            cout << endl;
        }
        else
        {
            cout << s[0];
            if (s[0] == 'z')
                    {
                        cout << 'a'<<endl;
                    }
                    else
                    {
                        char g = s[0] + 1;
                        cout << g<<endl;;
                    }
        }
        
    }
}