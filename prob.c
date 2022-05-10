#include <stdio.h>
#include <math.h>
 
int countWays(int l, int w){
    int A[l + 1], B[l + 1];
    A[0] = w-2, A[1] = 0, B[0] = 0, B[1] = 1;
    for (int i = 2; i <= l; i++) {
        A[i] = A[i - 2] + 2 * B[i - 1];
        B[i] = A[i - 1] + B[i - 2];
    }
    return A[l];
}
 
int main(){
    int w = 5;
    int l = 5;
    printf("%d",countWays(l,w));
    return 0;
}