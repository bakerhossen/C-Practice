#include<bits/stdc++.h>
#define ll long long
using namespace std;

Solve(){
    ll n, k;
    cin >> n >> k;
    ll a[n], prefix[n];
    for( int i = 0; i < n; i++ ) cin >> a[i];
    
    if( a[0] % 2 == 1) prefix[0] = 1;
    else prefix[0] = 0;

    for( int i = 1; i < n; i++ ){
        if( a[i] % 2 == 1 ) prefix[i] = prefix[i - 1] + 1;
        else prefix[i] = prefix[i - 1];
    }
    ll N = n - k;
    ll res = 0;
    for( int i = 0; i <= N; i++ ){
        if( i == 0 ){
          if( prefix[i + k - 1] > 0) res++;
        }
        else{
          if( prefix[i + k - 1] - prefix[i - 1] ) res++;
        }
    }
    cout << res << "\n";
}


int main(){
  ll tc;
  cin >> tc;
  while(tc--){
    Solve();
  }
  return 0;
}
