#include<stdio.h>
#define ll long long int
int main(){

    int n,m;
    scanf("%d",&n);
    int arr[n],i;
    for(i = 0; i < n; i++){
        scanf("%d",&arr[i]);    
    }
    scanf("%d",&m);
    int brr[m];
    for(i = 0; i < m; i++){
        scanf("%d",&brr[i]);
    }

    int res[n + m];
    int bindex = 0;
    for(i = 0; i < (n + m); i++){
        if(i < n){
            res[i] = arr[i];
        }
        else{
            res[i] = brr[bindex];
            bindex++;
        }
    }

    for(i = 0; i < (n+m); i++){
        printf("%d ",res[i]);    
    }

   
    
    return 0;
}