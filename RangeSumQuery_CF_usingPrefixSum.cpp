#include<bits/stdc++.h>
using namespace std;
int main(){
 
    long long n, q;
    cin >> n >> q;
    long long a[n], arr[n];
    long long sum = 0;
    for(long long i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
        arr[i] = sum;
    }
    
    for(long long i = 0; i < q; i++){
        int l, r, m, n;
        cin >> m >> n;
        l = min(m,n);
        r = max(m,n);
        long long ans;
        if((l == 1) || (r == 1 && l == 1)) ans = arr[r-1];
        else ans = arr[r-1] - arr[l-2];
        cout << ans << "\n";
        
    }
    
 
    return 0;
}
