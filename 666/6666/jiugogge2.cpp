#include <stdio.h>
 
#define N 9
 
int check_row( int a[N][N], int r )
{
    int i,j;
    for( i=0; i<N; i++ )
        for( j=i+1; j<N; j++ )
            if ( a[r][i] == a[r][j] )
                return 0;
    return 1;
}
int check_column( int a[N][N], int c )
{
    int i,j;
    for( i=0; i<N; i++ )
        for( j=i+1; j<N; j++ )
            if ( a[i][c] == a[j][c] )
                return 0;
    return 1;
}
 
void get_total( int a[N][N], int *total1, int *total2 )
{
    int i;
    for( i=0; i<N; i++ )
    {
        *total1 += a[i][i];
        *total2 += a[i][N-i-1];
    }
}
 
int main()
{
    int a[N][N], i, j, yes=1;
    for( i=0; i<N; i++ )
        for( j=0; j<N; j++ )
            scanf( "%d", &a[i][j] );
     
    for( i=0; i<N; i++ )
    {
        if ( !check_row( a, i ) || !check_column( a, i ) )
        {
            yes = 0;
            break;
        }
    }
    printf( "%s\n", yes ? "YES" : "NO" );
    int total1 = 0, total2 = 0;
    get_total( a, &total1, &total2 );
    printf( "%d %d\n", total1>total2?total1:total2, total1>total2?total2:total1 );
}
