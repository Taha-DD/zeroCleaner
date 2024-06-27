#include <stdio.h>
int mayday ( int t[], int n, int *u )
{
    for ( int i = 0; i < n; i ++ )
    {
        if ( t[i] == 0 )
        {
            int j = i;
            for ( j; t[j] == 0 && j < n - 1; j++ );
            t[i] = t[j];
            t[j] = 0;
        }
    }
    for ( int i = 0; i < n; i++ )
    {
        if ( t[i] == 0 )
        {
            *u = i;
            return *u;
        }
    }
}
int main()
{
    int e, k = 17, t[] = {0, 0, 8, 0, 0, 0, 9, 6, 0, 0, 0, 0, 0, 0, 0, 9, 2};
    mayday ( t, k, &e );
    for ( int i = 0; i < e; i++ )
        printf ("%d ", t[i] );
    return 0;
}
