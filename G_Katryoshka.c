#include<stdio.h>
#include<limits.h>
int main(){

    long long int e, m, b, ans = 0;
    scanf("%lld %lld %lld",&e,&m,&b);
    if(e == 0 || b == 0) ans = 0;
    else if(m == 0){
        if(e > b){
            if( 2 * b <= e){
                ans += b; 
                e = e / 2;
                b = b - b;
            }   
        }
        else{
            ans += e / 2;
            e = e / 2;
            b = b - e;
        }
    }
    else{
        //all are positive values
        long long int mn = e;
        if(m < mn) mn = m;
        else if(b < mn) mn = b;
        ans += mn;
        e = e - mn;
        m = m - mn;
        b = b - mn;
        if(m == 0){
            if(e > b){
                if( 2 * b <= e){
                    ans += b; 
                }
                else ans += e / 2;
            }
            else ans += e / 2;
        }

    }
    printf("%lld\n",ans);
    return 0;
}