#include<stdio.h>
#define ll long long int
int main(){

    ll n;
    scanf("%lld",&n);
    ll arr[n];
    for(ll i = 0; i < n; i++){
        scanf("%lld",&arr[i]);    
    }

    int index = 0;

    for(ll i = index; i < (n - 1); i++){
            arr[i] = arr[i+1];
    }

    for(ll i = 0; i < n - 1; i++){
        printf("%lld ",arr[i]);    
    }

   
    
    return 0;
}