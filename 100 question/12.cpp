#include <bits/stdc++.h>
using namespace std;
bool isPrime(int N) {
  
    
    if (N <= 1) {
        return false;
    }

    
    for (int i = 2; i < N; i++) {
      
        
        if (N % i == 0) {
            return false;
        }
    }
    return true;
}
int main()
{
    int n,m,p,nextPrime=0;
   
    cin>>n>>m;
     p=n;
bool f=true;
    while (f)
    {
        p++;
        
        
        if ( isPrime(p))
        {
           f=false;
           nextPrime=p;
           break;

        }
        
        
    }

    if (nextPrime==m)
    {
       cout<<"YES\n";
    }
    else{
         cout<<"NO\n";
    }
    //cout<<isPrime(4);
    
    



}