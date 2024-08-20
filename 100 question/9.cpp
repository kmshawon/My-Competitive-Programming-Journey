#include <bits/stdc++.h>
using namespace std;
int main()
{
    string lucky;
    int cnt=0;
    cin>>lucky;

    for (int i = 0; i < lucky.size(); i++)
    {
        if (lucky[i]=='4' ||lucky[i]=='7' )
        {
            cnt++;
        }
        
    }
    if (  cnt==4 || cnt==7)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    
    
    
}