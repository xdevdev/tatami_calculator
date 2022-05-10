#include <stdio.h>
#include <math.h>
 
int countWays(int n, int m){
    int count[n + 1];
    count[0] = 0;
    for (int i = 1; i <= n; i++) {
        if (i > m)
            count[i] = count[i - 1] + count[i - m];
        else if (i < m || i == 1)
            count[i] = 1;
        else
            count[i] = 2;
    }
    return count[n];
}
 
int main(){
    int n = 7, m = 4;
    printf("Number of ways = %d",countWays(n, m)) ;
    return 0;
}