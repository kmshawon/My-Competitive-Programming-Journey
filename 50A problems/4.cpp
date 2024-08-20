#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    sort(v, v + n, greater<int>()); 
    int l=n/2;
    int i=0;
    while (l-- && k>0)
    {
        int x=v[i];

        int y=v[i+1];
        int o=min((x-y),k);
        v[i+1]+=o;
        k-=o;
        i+=2;

    }
    int ans=0,ans1=0;
    for (int i = 0; i < n; i++)
    {
        if (i%2==0)
        {
            ans+=v[i];
        }else
        {
            ans1+=v[i];
        }
        
        
    }
    cout<<ans-ans1<<endl;
    
    
    

}
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}