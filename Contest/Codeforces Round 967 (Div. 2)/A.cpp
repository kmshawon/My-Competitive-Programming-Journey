#include<bits/stdc++.h>
using namespace std;
const int N = 105;
int cnot[N];
void solve() {
        int n; cin >> n;
        for(int i = 1; i <= n; i++) 
        {
        cnot[i] = 0;
        }
          
        int ans = 0;
        for(int i = 1; i <= n; i++) {
                int x; cin >> x;
                ++cnot[x];
                ans = max(ans, cnot[x]);
        }
        cout << n - ans <<endl;
}
int main(){
        int t; 
        cin >> t;
        while(t--) {
              solve();}
return 0;
}