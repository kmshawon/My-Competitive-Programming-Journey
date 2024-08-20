#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a,b,c;
    a=0;
    b=0;
    c=0;
    while (t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        a+=x;b+=y;c+=z;
    }
    if(a==0 && b==0 && c==0){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    
}