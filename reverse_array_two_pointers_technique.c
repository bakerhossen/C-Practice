#include<stdio.h>
#define ll long long int
int main(){

    ll n;
    scanf("%lld",&n);
    ll arr[n],i;
    for(ll i = 0; i < n; i++){
        scanf("%lld",&arr[i]);    
    }

    int temp, j = n - 1;
    for(i = 0; i < j; i++,j--){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    for(ll i = 0; i < n; i++){
        printf("%lld ",arr[i]);    
    }

   
    
    return 0;
}