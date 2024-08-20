#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin>>n;
    if (n%2==0)
    {
        cout<<-1<<endl;
    }
    else
    {
        int w=n/2,w1=n,w2=n/2,w3=2;
        if(n==1){
            cout<<1<<endl;
        }else
        {
            while (w--)
            {
                cout<<w1<<" ";
                w1-=2;
            }
            cout<<1<<" ";
            while (w2--)
            {
                cout<<w3<<" ";
                w3+=2;
            }
            cout<<endl;
        }
        
    }
    
    
}
int main()
{
      int t;
      cin>>t;
    while(t--)
       {
       solve();
       }
return 0;
}