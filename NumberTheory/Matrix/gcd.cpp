#include <bits/stdc++.h>
using namespace std;
#define ll long long
int gcd(int a,int b){
    //a>b
    if(b==0){
        return a;
    }else
    {
        return gcd(b,a%b);
    }
    

}
int main()
{
      int t,l;
      cin>>t>>l;
      int d=gcd(t,l);
      cout<<d;
    
return 0;
}