#include<stdio.h>
#define ll long long int
int main(){

    ll n;
    scanf("%lld",&n);
    ll arr[n + 1];
    for(ll i = 0; i < n; i++){
        scanf("%lld",&arr[i]);    
    }

    int index = 1;
    int input = 100;
    for(ll i = n; i > index; i--){
            arr[i] = arr[i - 1];
    }


    arr[index] = input;

    for(ll i = 0; i <= n; i++){
        printf("%lld ",arr[i]);    
    }

   
    
    return 0;
}