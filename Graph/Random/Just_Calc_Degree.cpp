#include <bits/stdc++.h>
using namespace std;
#define ll long long
int c[1005];
void solve()
{
    int x;
    cin>>x;
    c[x]++;

}
bool flag=true;
int main()
{
      int t;
      cin>>t;
      t--;
      
    while(t--)
       {
       solve();
       }

       for (int i = 1; i < (sizeof(c)/sizeof(c[0])); i++)
       {
            if(c[i]>=3 && c[i+1]>0 ){
                flag=false;
                break;
            }
       }
       if (flag)
       {
        cout<<"Yes\n";

       }
       else
       {
         cout<<"No\n";
       }
       
       
       
return 0;
}