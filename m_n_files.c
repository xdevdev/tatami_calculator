#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    int m=2, n=2;
    float sum=0;
    for(int i=1;i<=m;i++){
        for(int j=1; j<= n; j++){
            sum+= 4*(pow(cos((i*M_PI/m+1)),2)+pow(cos((j*M_PI/n+1)),2));
        }
    }
    printf("%.2f\n", sum);
    printf("%.2f solutions\n", sqrt(sqrt(sum))); 
    return 0;
}