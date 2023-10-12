#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int t;
    scanf("%d",&t);

    int k = 0;
    int b[n];
    for(int i = 0; i < n; i++){
        if(arr[i] == t){
            b[k++] = i;
        }
    }

    for(int i = 0; i < k; i++){
        printf("%d ",b[i]);
    }
    printf("\n");
    return 0;
}