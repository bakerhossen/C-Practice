#include<stdio.h>
int r, c;
void F( int A[][c], int B[][c], int S[][c], int r, int c, int i, int j ){


    if( i == r ) return;

    S[i][j] = A[i][j] + B[i][j];

    if( j == c ){
        F( A, B, S, r, c, i + 1, 0 );
    }
    else{
        F( A, B, S, r, c, i, j + 1 );
    }


}
int main(){

   
    scanf( "%d %d", &r, &c );
    int A[r][c], B[r][c], S[r][c];
    for( int i = 0; i < r; i++ ){
        for( int j = 0; j < c; j++ ){
            scanf( "%d", &A[i][j] );
        }
    }
    for( int i = 0; i < r; i++ ){
        for( int j = 0; j < c; j++ ){
            scanf( "%d", &B[i][j] );
        }
    }

    F( A, B, S, r, c, 0, 0 );

    for( int i = 0; i < r; i++ ){
        for( int j = 0; j < c; j++ ){
            printf( "%d ",S[i][j] );
        }
        printf("\n");
    }

    return 0;
}
